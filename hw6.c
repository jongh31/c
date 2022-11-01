#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Odd_numbers(int n[]);
void Even_numbers(int n[]);

int main(void)
{
	int number[5];
	int i;
	printf("Please input five integers ");

	for (i = 0; i < 5; i++)
	{
		printf("");
		scanf("%d", &number[i]);
	}
	Odd_numbers(number);
	Even_numbers(number);
	return 0;

}

void Odd_numbers(int n[])
{
	int i;
	printf("Odd numbers: ");
	for (i = 0; i < 5; i++)
	{
		if (n[i] % 2 == 1)
			printf("%d ", n[i]);
	}
	printf("\n");
}

void Even_numbers(int n[])
{
	int i;
	printf("Even numbers: ");
	for (i = 0; i < 5; i++)
	{
		if (n[i] % 2 == 0)
			printf("%d ", n[i]);
	}
	printf("\n");
}