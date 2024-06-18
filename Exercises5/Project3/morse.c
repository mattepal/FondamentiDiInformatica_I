#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* decodifica_morse(const char* codice) {
	int spazi = 0,cnt=0,n=0;
	while (sscanf(codice, "%[ /]n") ==1 ) {
		spazi =spazi+1;
	}
	char *lettera;
	char* parola = calloc(spazi, sizeof(char));
	while (sscanf(codice, "%[._]", lettera ) == 1)
	{
		switch (*lettera)
		{
		case '._':
			parola[cnt] = "A";
			cnt++;
				break;
		case '_...':
			parola[cnt] = "B";
			cnt++;
			break;
		case '_._.':
			parola[cnt] = "C";
			cnt++;
			break;
		default:
			break;
		}
	}
	return parola;
}
int main() {
	const char *c= {"._ _._. / _..."};
	decodifica_morse(c);
}