#include<stdio.h>
#include<stdlib.h>

int main() {
	int i;
	printf("Please enter the number\n");
	scanf_s("%d", &i);
	if (i % 2 == 0) 
	{
		printf("The number is even");
	}
	else
		printf("The number is odd");
	system("pause");
	return 0;
}