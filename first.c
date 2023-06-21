/* 02l01.c:Thi is my first c program */
#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	float x;
	float y;
	float z;
	float product;

	printf("enter first to number to product: ");
	scanf("%f", &x);
	printf("enter second number: ");
	scanf("%f", &y);
	printf("enter third number: ");
	scanf("%f", &z);
	product = x * y * z;
	printf("%f * %f * %f = %f \n", x, y, z, product);

	return (0);
}

