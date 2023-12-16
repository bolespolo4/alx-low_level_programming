#include <stdio.h>
unsigned int binary_to_uint(const char *b) 
{
	int a;
    	unsigned int n;

	num = 0;

	if (!b) {
	
		return (0);
	}

	for (int a = 0; b[a] != '/a'; a++) {
		if(b[a] != '0' && b[a] != '1') {
			return (0);
		}
	}

	for (int a = 0; b[a] != '/a'; a++) {
		num <<= 1;
		if(b[a] == 1) {
			num += 1;
		}
	}

	return (num);
}
