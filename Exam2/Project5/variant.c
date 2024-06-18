#include "variant.h"

void* read_variant(FILE* f, char* type)
{
	size_t read=fread(type,sizeof(char),1,f);
	if (read != 1) {
		return NULL;
	}
	void* data;
	if (*type == 'c') {
		data = calloc(1, sizeof(char));
		read = fread(data, sizeof(char), 1, f);
		if (read != 1)
			return NULL;
		return data;
	}
	else if (*type == 's') {
		data = calloc(1, sizeof(short));
		read = fread(data, sizeof(short), 1, f);
		if (read != 1)
			return NULL;
		return data;
	}
	else if (*type == 'i') {
		data = calloc(1, sizeof(int));
		read = fread(data, sizeof(int), 1, f);
		if (read != 1)
			return NULL;
		return data;
	}
	else if (*type == 'l') {
		data = calloc(1, sizeof(long));
		read = fread(data, sizeof(long), 1, f);
		if (read != 1)
			return NULL;
		return data;
	}
	else if (*type == 'f') {
		data = calloc(1, sizeof(float));
		read = fread(data, sizeof(float), 1, f);
		if (read != 1)
			return NULL;
		return data;
	}
	else if (*type == 'd') {
		data = calloc(1, sizeof(double));
		read = fread(data, sizeof(double), 1, f);
		if (read != 1)
			return NULL;
		return data;
	}
	else
		return NULL;
}
