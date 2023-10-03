#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct
{
	uint8_t  e_ident[16];
	uint16_t e_type;
	uint16_t e_machine;
	uint32_t e_version;
	uint8_t  e_osabi;
	uint8_t  e_abiversion;
	uint8_t  e_pad[7];
	uint16_t e_type2;

	uint64_t e_entry;
} ElfHeader;

int main(int argc, char *argv[])
{
	const char *elf_filename;
	FILE *file;
	ElfHeader header;

	if (argc != 2)
	{
		printf("Usage: %s elf_filename\n", argv[0]);
		return (1);
	}

	elf_filename = argv[1];
	file = fopen(elf_filename, "rb");
	if (file == NULL)
	{
		perror("Error opening file");
		return (1);
	}

	fread(&header, sizeof(ElfHeader), 1, file);

	if (header.e_ident[0] != 0x7F ||
			header.e_ident[1] != 'E' ||
			header.e_ident[2] != 'L' ||
			header.e_ident[3] != 'F')
	{
		printf("Not a valid ELF file.\n");
		fclose(file);
		return (1);
	}

	printf("Magic:   0x7FELF\n");
	printf("Class:   %s\n", header.e_ident[4] == 1 ? "32-bit" : "64-bit");
	printf("Data:    %s\n", header.e_ident[5] == 1 ? "Little-endian" : "Big-endian");
	printf("Version: %u\n", (unsigned int)header.e_version);
	printf("OS/ABI:  %d\n", (int)header.e_osabi);
	printf("ABI Version: %d\n", (int)header.e_abiversion);
	printf("Type:    %d\n", (int)header.e_type);
	printf("Entry point address: 0x%lx\n", (unsigned long)header.e_entry);

	fclose(file);

	return (0);
}

