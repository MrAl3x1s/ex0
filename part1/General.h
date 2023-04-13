#ifndef STDIO_H
    #define STDIO_H
    #include <stdio.h>
#endif
#ifndef STDBOOL_H
	#define STDBOOL_H
	#include <stdbool.h>
#endif
#ifndef STDLIB_H
	#define STDLIB_H
	#include <stdlib.h>
#endif
#ifndef _GNU_SOURCE
	#define _GNU_SOURCE
#endif
#ifndef GENERAL_H
	#define GENERAL_H
	void end(void);
	bool readLine(char**);
	bool readInt(int*);
	bool readChar(char*);
#endif
#ifndef MAX_STR_SIZE
	#define MAX_STR_SIZE 256
#endif

