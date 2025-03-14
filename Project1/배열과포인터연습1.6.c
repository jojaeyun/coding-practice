#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	int* p = (int*)malloc(sizeof(int) * 10);
	int* p2 = p; // p2와 p가 같은 메모리를 가리킴

	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++) {
		*p2 = rand();
		p[i] = *p2;
	}


	for (int i = 0; i < 10; i++) printf("%d ", p[i]);

	free(p);
	
	return 0;

}