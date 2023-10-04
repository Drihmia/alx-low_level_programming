#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define ELFOSABI_NONE       0
#define ELFOSABI_SYSV       0
#define ELFOSABI_HPUX       1
#define ELFOSABI_NETBSD     2
#define ELFOSABI_LINUX      3
#define ELFOSABI_SOLARIS    6
#define ELFOSABI_IRIX       8
#define ELFOSABI_FREEBSD    9
#define ELFOSABI_TRU64      10
#define ELFOSABI_ARM        97
#define ELFOSABI_STANDALONE 255
#define CUSTOM_ELF_VERSION 2

/**
 * struct ElfHeader - ELF header structure
 * @e_ident: ELF identification
 * @e_type: Object file type
 * @e_machine: Target architecture
 * @e_version: Object file version
 * @e_osabi: OS/ABI identification
 * @e_abiversion: ABI version
 * @e_pad: Padding
 * @e_type2: Additional type field (unused)
 * @e_entry: Entry point virtual address
 *
 * Description: Structure representing the ELF header of an ELF file.
 */

struct ElfHeader
{
	unsigned char e_ident[16];
	unsigned short e_type;
	unsigned short e_machine;
	unsigned long e_version;
	unsigned char e_osabi;
	unsigned char e_abiversion;
	unsigned char e_pad[7];
	unsigned short e_type2;
	unsigned int e_entry;
};
typedef struct ElfHeader ElfHeader;
void displayElfHeaderInfo(const struct ElfHeader *header);
void printOSABI(u_int8_t struct_e_osabi);

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
