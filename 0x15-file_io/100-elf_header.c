#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

struct ElfHeader {
	unsigned char e_ident[16];
	unsigned short e_type;
	unsigned short e_machine;
	unsigned long e_version;
	unsigned char e_osabi;
	unsigned char e_abiversion;
	unsigned char e_pad[7];
	unsigned short e_type2;
	unsigned long e_entry;
};

typedef struct ElfHeader ElfHeader;

void displayElfHeaderInfo(const ElfHeader *header) {
	printf("Magic:   0x7FELF\n");
	printf("Class:   %s\n", header->e_ident[4] == 1 ? "32-bit" : "64-bit");
	printf("Data:    %s\n", header->e_ident[5] == 1 ? "Little-endian" : "Big-endian");
	printf("Version: %lu (current)\n", header->e_version);
	printf("OS/ABI:  %u\n", header->e_osabi);
	printf("ABI Version: %u\n", header->e_abiversion);
	printf("Type:    %u (EXEC)\n", header->e_type);
	printf("Entry point address: 0x%lx\n", header->e_entry);
}

int main(int argc, char *argv[]) {
	const char *elf_filename;
	int fd;
	ElfHeader header;
	ssize_t bytes_read;

	if (argc != 2) {
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	elf_filename = argv[1];
	fd = open(elf_filename, O_RDONLY);

	if (fd == -1) {
		perror("Error opening file");
		exit(98);
	}

	bytes_read = read(fd, &header, sizeof(ElfHeader));

	if (bytes_read == -1) {
		perror("Error reading file");
		close(fd);
		exit(98);
	}

	if (header.e_ident[0] != 0x7F ||
			header.e_ident[1] != 'E' ||
			header.e_ident[2] != 'L' ||
			header.e_ident[3] != 'F') {
		fprintf(stderr, "Not a valid ELF file: %s\n", elf_filename);
		close(fd);
		exit(98);
	}

	displayElfHeaderInfo(&header);

	close(fd);
	exit(0);
}

