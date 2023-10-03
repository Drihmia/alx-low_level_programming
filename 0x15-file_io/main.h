#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

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
	unsigned long e_entry;
};
void displayElfHeaderInfo(const struct ElfHeader *header);


typedef struct ElfHeader ElfHeader;
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
