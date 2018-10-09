#include<stdio.h>
#include<stdlib.h>

int main() {
	float BMI,weight,height;
	printf("enter your height\n");
	scanf_s("%f", &height);
	printf("enter your weight\n");
	scanf_s("%f", &weight);
	height = height / 100;
	BMI = weight / (height * height);
	printf("BMI value is %f\n", BMI);
	if(BMI<18.5)
	{
	printf("Unederweight");
	}
	if (BMI > 18.5 && BMI<24.9)
	{
		printf("Normal");
	}
	if (BMI > 25 && BMI<29.9)
	{
		printf("Overweight");
	}
	if (BMI > 30)
	{
		printf("Obese");
	}
	system("pause");
	return 0;
}