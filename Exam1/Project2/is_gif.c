#include "is_gif.h"

bool is_gif(const char* filename)
{
	FILE *f = fopen(filename, "rb");
	if (f == NULL) {
		return false;
	}
	char img[6];
	size_t ret_code=fread(img, sizeof*img, 6, f);
	if (ret_code != 6) {
		fclose(f);
		return false;
	}
	fclose(f);
	if (img[0] == 'G' && img[1] == 'I' && img[2] == 'F' && img[3] == '8' && img[5] == 'a') {
		if (img[4] == '7' || img[4] == '9')
			return true;
	}
	return false;

}
