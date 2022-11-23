#include <stdio.h>

int main(void)
{
	char str[100] = { 0 };
	int i = 0;

	printf("input> ");
	gets_s(str, sizeof(str));

	for (i = 0; i < (int)strlen(str); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
	printf("Output> %s", str);

	return 0;
}