#include<stdio.h>
#include<stdlib.h>

int main() {
	int a, b, c, d = 4, e, f, g = 3;
	for (a = 1; a <= 9; a++)
	{
		printf("P");
	}
	printf("\n");
	for (b = 1; b <= 4; b++) {
		for (c = 1; c <= d; c++) {
			printf(" ");
		}
		for (e = 1; e <= 2; e++)
		{
			printf("P");
			for (f = 1; f <= g; f++)
			{
				printf(" ");
			}
		}
		if (b == 3) {
			d += 1;
			g -= 2;
		}
		printf("\n");
	}

	printf("\n");


	int h, i = 3, j, z;
	for (z = 1; z <= 5; z++) {
		for (h = 1; h <= i; h++)
		{
			printf(" ");
		}
		if (z == 1 || z == 2)
		{
			i -= 1;
		}
		else
		{
			i += 1;
		}

		if (z == 1)
		{
			printf("JJ");
		}
		else if ("z!=5")
		{
			printf("J");
		}

		if (z == 5)
		{
			for (a = 1; a <= 7; a++)
			{
				printf("J");
			}
		}
		printf("\n");
	}

	printf("\n");

	int l, m, n, o = 2, p = 7;
	for (l = 1; l <= 5; l++) {
		if (l == 1)
		{
			for (a = 1; a <= 9; a++)
			{
				printf("D");
			}
			printf("\n");
		}
		for (m = 1; m <= o; m++)
		{
			if (l == 4)
			{
				printf(" ");
			}
			if (l == 5 && m == 1)
			{
				printf("  ");
			}
			printf("D");
			if (l != 5)
			{
				for (n = 1; n <= p; n++)
				{
					printf(" ");
				}
			}
		}
		if (l == 3)
		{
			p -= 3;
		}
		if (l == 4)
		{
			o += 3;
		}
		printf("\n");
	}
	system("pause");
	return 0;
}