#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define MAX 10001;

int prt2(void) {
	int i;
	int arr[10];
	int* p = NULL;

	srand((unsigned)time(NULL));

	for (i = 0; i < 10; i++) {
		arr[i] = rand();
	}

	p = (int*)malloc(sizeof(int) * 10);

	for (i = 0; i < 10; i++) {
		p[i] = arr[i];
	}

	printf("index\tary\tp\n");
	for (i = 0; i < 10; i++) printf("%d\t%d\t%d\n", i, arr[i], p[i]);

	free(p);

	return 0;
}
