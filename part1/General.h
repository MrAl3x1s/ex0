// general header file, with inclusions that are useful to almost any program.
#ifndef GENERAL_H
#define GENERAL_H
    // standard libraries.
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
    // reserved max sizes.
    #ifndef MAX_STR_SIZE
        #define MAX_STR_SIZE 256
    #endif
    // values to return from main.
    #ifndef RETURN_SUCCESS
        #define RETURN_SUCCESS 0
    #endif
    #ifndef RETURN_FAILURE
        #define RETURN_FAILURE (-1)
    #endif
#endif
