#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, j, k,old;
	int a[3];
	printf("Please enter three number\n");
	for (i = 0; i <= 2; i++) 
	{
		scanf_s("%d",&a[i]);

	}
	for (i = 0; i <= 2; i++) {
		for (j = i + 1; j <= 2; j++) 
		{
			if (a[i] < a[j])
			{
				old = a[i];
				a[i] = a[j];
				a[j] = old;
			}
		}
	}
		printf("Max = %d\n",a[0]);
		printf("Min = %d",a[2]);
	system("pause");
	return 0;
}