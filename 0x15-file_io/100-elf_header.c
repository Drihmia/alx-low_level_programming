#include "main.h"


void displayElfHeaderInfo(const struct ElfHeader *header)
{
	int i;
	const char *osabi_description;
	const char *type_description;


	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < 16; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("  Class:   %s\n", header->e_ident[4] == 1 ? "ELF32" : "ELF64");
	printf("  Data:    %s\n", header->e_ident[5] == 1 ? "2's complement, little endian" : "2's complement, Big-endian");
	printf("  Version: %-28lu (current)\n", header->e_version);

	switch (header->e_osabi)
	{
		case 0:
			osabi_description = "UNIX - System V";
			break;
		case 1:
			osabi_description = "HP-UX";
			break;
		default:
			osabi_description = "Unknown";
	}

	switch (header->e_type)
	{
		case 0:
			type_description = "No file type";
			break;
		case 1:
			type_description = "Relocatable file";
			break;
		case 2:
			type_description = "EXEC (Executable file)";
			break;
		default:
			type_description = "Unknown";
	}
	printf("  OS/ABI:  %s\n", osabi_description);
	printf("  ABI Version: %u\n", header->e_abiversion);
	printf("  Type:    %s (EXEC)\n", type_description);
	printf("  Entry point address: 0x%lx\n", header->e_entry);
}

int main(int argc, char *argv[])
{
	const char *elf_filename;
	int fd;
	ElfHeader header;
	ssize_t bytes_read;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	elf_filename = argv[1];
	fd = open(elf_filename, O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		exit(98);
	}

	bytes_read = read(fd, &header, sizeof(ElfHeader));
	if (bytes_read == -1)
	{
		perror("Error reading file");
		close(fd);
		exit(98);
	}
	if (header.e_ident[0] != 0x7F ||
			header.e_ident[1] != 'E' ||
			header.e_ident[2] != 'L' ||
			header.e_ident[3] != 'F')
	{
		fprintf(stderr, "Not a valid ELF file: %s\n", elf_filename);
		close(fd);
		exit(98);
	}
	displayElfHeaderInfo(&header);

	close(fd);
	exit(0);
}

