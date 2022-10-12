#include<stdio.h>

int jinsu(int n);

int main(void)
{
	int number;
	printf("Please enter a number: ");
	scanf("%d", &number);
	jinsu(number);
	printf("\n");

	return 0;
}

int jinsu(int n)
{
	if (n == 0 || n == 1)
		printf("%d", n);
	else
	{
		jinsu(n / 2);
		printf("%d", n % 2);
	}
	return 0;
}