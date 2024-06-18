#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char* extract_number(const char* message) {
	size_t len = strlen(message);
	int cnt = 0,b=0;
	if (message == NULL) {
		return NULL;
	}
	for (size_t i = 0; i < len; i++)
	{
		if (isspace(message[i]) != 0) {
			cnt = cnt + 1;
		}
	}
	char* ret = calloc(cnt, sizeof(char));
	
}