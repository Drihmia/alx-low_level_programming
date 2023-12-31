#include "main.h"

/**
 * displayElfHeaderInfo - as it calls
 * @header: pointer to struct.
 * Return: None.
 */

void displayElfHeaderInfo(const Elf64_Ehdr *header)
{
	int i;
	const char *type_description;
	char *endian, *end_s, *end_g, *ELF_class;


	printf("ELF Header:\n"), printf("  Magic:  ");
	for (i = 0; i < 16; i++)
		printf(" %02x", header->e_ident[i]);
	printf("\n"), ELF_class = header->e_ident[4] == 1 ? "ELF32" : "ELF64";
	printf("  Class:                             %s\n", ELF_class);
	end_s = "2's complement, little endian", end_g = "2's complement, Big-endian";
	endian = header->e_ident[5] == 1 ? end_s : end_g;
	printf("  Data:                              %s\n", endian);
	printf("  Version:                           %s\n",
			EV_CURRENT == 1 ? "1 (current)" : "1");
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
		case 3:
			type_description = "Shared object file";
			break;
		default:
			type_description = "Unknown";
	}
	printOSABI(header->e_ident[EI_OSABI]);
	printf("  ABI Version:                       %u\n",
			header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n", type_description);
	printf("  Entry point address:               0x%x\n",
			(unsigned int)header->e_entry);
}
/**
 * printOSABI - as the name says.
 * @osabi: the struct variable.
 * Return. NONE
 */
void printOSABI(uint8_t osabi)
{
	const char *osabi_description;

	switch (osabi)
	{
		case ELFOSABI_SYSV:
			osabi_description = "UNIX - System V";
			break;
		case ELFOSABI_HPUX:
			osabi_description = "UNIX - HP-UX";
			break;
		case ELFOSABI_NETBSD:
			osabi_description = "UNIX - NetBSD";
			break;
		case ELFOSABI_LINUX:
			osabi_description = "UNIX - GNU";
			break;
		case ELFOSABI_SOLARIS:
			osabi_description = "UNIX - Solaris";
			break;
		case ELFOSABI_IRIX:
			osabi_description = "UNIX - IRIX";
			break;
		case ELFOSABI_FREEBSD:
			osabi_description = "UNIX - FreeBSD";
			break;
		case ELFOSABI_TRU64:
			osabi_description = "UNIX - TRU64 UNIX";
			break;
		case ELFOSABI_ARM:
			osabi_description = "ARM architecture";
			break;
		case ELFOSABI_STANDALONE:
			osabi_description = "Stand-alone (embedded)";
			break;
		default:
			osabi_description = "<unknown: 53>";
	}

	printf("  OS/ABI:                            %s\n", osabi_description);
}

/**
 * main - entry point.
 * @argc: counter.
 * @argv: double pointer.
 * Return: integer.
 */
int main(int argc, char *argv[])
{
	const char *elf_filename;
	int fd;
	Elf64_Ehdr header;
	ssize_t bytes_read;
	off_t offset;

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

	bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read == -1)
		perror("Error reading file"), close(fd), exit(98);
	if (header.e_ident[0] != 0x7F ||
			header.e_ident[1] != 'E' ||
			header.e_ident[2] != 'L' ||
			header.e_ident[3] != 'F')
	{
		fprintf(stderr, "readelf: Error: Not an ELF file -");
		close(fd);
		exit(98);
	}
	offset = lseek(bytes_read, 0, SEEK_SET);
	if (offset > 0)
		close(fd), exit(98);
	displayElfHeaderInfo(&header);

	close(fd);
	return (0);
}

