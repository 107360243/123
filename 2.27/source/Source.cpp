#include<stdio.h>
#include<stdlib.h>

int main() {
	int a, b, c = 4, d, e = 1;
	for (a = 1; a <= 5; a++) {
		for (b = 1; b <= c; b++)
		{
			printf(" ");
		}
		for (d = 1; d <= e; d++)
		{
			printf("*");
		}
		c -= 1;
		e += 2;
		printf("\n");
	}
	system("pause");
	return 0;
}