#ifndef _MAIN_H
#define _MAIN_H


#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif
