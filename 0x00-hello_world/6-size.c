#include<stdio.h>

int main()
{
	char a = 's';
	int x = 16;
	int y = 32;
	int z = 999;
	float s = 0.08f;
	printf("Size of a char: %ld byte(s)\n", sizeof(a));
	printf("Size of an int: %ld byte(s)\n", sizeof(x));
	printf("Size of a long int: %li byte(s)\n", sizeof(y));
	printf("Size of a long long int: %li byte(s)\n", sizeof(z));
	printf("Size of a float: %ld byte(s)\n", sizeof(s));
	return (0);
}
