#include "General.h"
#ifndef READWRITE_H
    #define READWRITE_H
    typedef enum {INT = 0, LONG = 1, FLOAT = 2, DOUBLE = 3, CHAR = 4} Type;
    bool readLine(char**);
    bool readInt(int*);
    bool readChar(char*);
    bool parseString(char *string, char *format);
    bool unfoldArray(Type type, void *arr, int size);
    char* toLowercase(const char*);
#endif //READWRITE_H
// stringification for enums, resolving them to their name
#ifndef STRINGIFY_ENUM(var)
#define STRINGIFY_ENUM(var) STRINGIFY(var)
#endif
// stringification, writing the name of a variable as a string.
#ifndef STRINGFIY(var)
    #define STRINGIFY(var) #var
#endif
