#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, j, k;
	printf("number  square  cube\n");
	for (i = 0; i <= 10; i++) 
	{
		j = i*i;
		k = i*i*i;
		printf("%d",i);
		if(i>=4)
		{
		printf(" ");
		}
		printf("%8d",j);
		if(i==3||i>=5)
		{
		printf(" ");
		}
		printf("%8d",k);
		printf("\n");
	}
	system("pause");
	return 0;
}