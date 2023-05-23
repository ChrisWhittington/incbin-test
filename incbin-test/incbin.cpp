#include "incbin.h"
#include <stdio.h>

INCBIN(bookbin, "book.bin");

//global const unsigned int gbookbinSize = 6;

int main()
{
	//extern const unsigned char gbookbinData[];
	//extern const unsigned char gbookbinEnd;
	//extern const unsigned int gbookbinSize;

	printf("bookbin_size = %d\n", gbookbinSize);
	printf("bookbin_data = %p\n", gbookbinData);
	printf("bookbin_end = %p\n", gbookbinEnd);
	return 0;
}

