#define _NO_SECURE_CRT_WARNINGS
#if !defined PATH_SPLIT_H
#define PAT_SPLIT_H

#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void path_split(const char* str, char** path, char** filename);

#endif // !defined PATH_SPLIT_H
