#ifndef ERROR_H
#define ERROR_H

typedef struct Error {
    enum ErrorType {
        ERROR_NONE = 0,
        ERROR_SYNTAX,
        ERROR_TYPE,
        ERROR_GENERIC,
        ERROR_TODO,
    } type;
    char *message;
} Error;

#endif