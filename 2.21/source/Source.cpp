#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j, k;
	for (i = 1; i <= 9; i++)
	{
		if (i == 1 || i == 9)
			for (j = 1; j <= 9; j++)
			{
				printf("*");
			}
		else
		{
			printf("*");
			for (k = 1; k <= 7; k++)
			{
				printf(" ");
			}
			printf("*");
		}

		printf("\n");
	}

	int a, b;
	for (a = 1; a <= 9; a++) {
		if (a == 1 || a == 9)
		{
			printf("   ");
			printf("***");
		}
		else if (a == 2 || a == 8)
		{
			printf(" ");
			printf("*");
			printf("     ");
			printf("*");
		}
		else
		{
			printf("*");
			for (b = 1; b <= 7;b++) {
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}
	int m, l, c = 2, d, e = 1;
	int n;
	for (m = 1; m <= 3; m++) {
		for (l = 1; l <= c; l++) {
			printf(" ");
		}
		for (d = 1; d <= e; d++) {
			printf("*");
		}
		c -= 1;
		e += 2;
		printf("\n");
	}
	for (n = 1; n <= 6; n++) {
		printf("  ");
		printf("*");
		printf("\n");


	}
	int z, y, x = 4, v, w = 1, f, g = 1;
	for (z = 1; z <= 5; z++) {
		for (y = 1; y <= x; y++)
		{
			printf(" ");

		}
		for (v = 1; v <= w; v++) {
			printf("*");
			if (a != 1) {
				for (f = 1; f <= g; f++)
				{
					printf(" ");
				}
			}
		}
		x -= 1;
		if (w == 1) {
			w += 1;
		}
		if (z != 1) {
			g += 2;
		}
		printf("\n");
	}
	int ii, jj, kk = 1, L, mm = 2, nn, o = 5;
	for (ii = 1; ii <= 4; ii++) {
		for (jj = 1; jj <= kk; jj++) {
			printf(" ");
		}
		for (L = 1; L <= mm; L++) {
			printf("*");
			for (nn = 1; nn <= o; nn++)
			{
				printf(" ");
			}
		}
		kk += 1;
		if (ii == 3) {
			mm -= 1;
		}
		o -= 2;
		printf("\n");
	}
	system("pause");
	return 0;
}