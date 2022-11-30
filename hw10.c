#define _NON_FLOAT_ARGUMENT_TO_FORMAT_FUNCTION
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct cities
{
	char name[20];
	char country[20];
	int population;
};

int main(void)
{
	struct cities arr[3];
	int i;

	printf("Input three cities: \n");

	for (i = 0; i < 3; i++)
	{
		printf("Name> ");
		scanf_s("%s", &arr[i].name, sizeof(arr[i].name));
		printf("Country> ");
		scanf_s("%s", &arr[i].country, sizeof(arr[i].country));
		printf("Population> ");
		scanf_s("%d", &arr[i].population);
	}
	printf("Printing the three cities:");

	for (i = 0; i < 3; i++)
	{
		printf("%s in %s with a population of %d people \n", &arr[i].name, &arr[i].country, &arr[i].population);
	}
	return 0;
}
