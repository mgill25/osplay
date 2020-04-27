#include<stdio.h>
#include <stdlib.h>

#define ONEGB (1 << 30)

int main() {
	int count = 0;
	// malloc a gigabyte of memory over and over again
	while (1) {
		if (malloc(ONEGB) == NULL) {
			printf("malloc refused!\n");
			return 0;
		}
		printf("got %dGB\n", ++count);
	}
}