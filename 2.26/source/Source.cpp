#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, j;
	printf("please input two number\n");
	scanf_s("%d%d", &i, &j);
		if(i%j==0)
		{
			printf("%d and %d is multiple relationship ", i, j);
		}
		else
		{
			printf("%d and %d is not multiple relationship ", i, j);
		}
	system("pause");
	return 0;
}