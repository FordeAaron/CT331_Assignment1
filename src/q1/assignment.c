#include <stdio.h>

int main(int arg, char* argc[])
{

	printf(" Size of int = %d\n", sizeof(int));
	printf(" Size of int* = %d\n", sizeof(int*));
	printf(" Size of long = %d\n", sizeof(long));
	printf(" Size of double* = %d\n", sizeof(double*));
	printf(" Size of char** = %d", sizeof(char**));

	return 0;
}