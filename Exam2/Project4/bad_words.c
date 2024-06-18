#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>

void bad_word_filter(char* s, char** words, size_t nwords) {
	if (s == NULL || words == NULL) {
		return;
	}
	for (size_t i = 0; i < nwords; i++)
	{
		size_t l=strlen(words[i]);
		char* p = strstr(s, words[i]);
		if (p!=NULL) {
			for (size_t o = 0; o < strlen(s) && l>0; o++)
			{
				if (&s[o] >= p) {
					s[o] = '*';
					l=l-1;
				}	
			}
		}	
	}
	return;
}
//
//void bad_word_filter(char* s, char** words, size_t nwords) {
//	if (s == NULL || words == NULL) {
//		return;
//	}
//	for (size_t i = 0; i < nwords; i++) {
//		char* c = strstr(s, words[i]);
//		if (c != NULL) {
//			size_t len = strlen(words[i]);
//			for (size_t j = 0; j < strlen(s) && len>0; j++) {
//				if (&s[j] >= c) {
//					s[j] = '*';
//					--len;
//				}
//			}
//		}
//	}
//}


//int main() {
//	char* s = "sei un carciofo bello";
//	char* words[] = { "carciofo", "broccolo", "cavolfiore" };
//	bad_word_filter(s, words, 3);
//	return 0;
//}