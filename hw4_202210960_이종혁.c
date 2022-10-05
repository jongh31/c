#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, num2;
	printf("Please enter a number.: ");
	scanf("%d", &num);

	if (num == 1)
	{
		printf("It is not a prime number.");
	}
	if (num != 1)
	{
		for (num2 = 2; num / num2; num2++)
		{
			if (num / num2 == 1)
			{
				goto Fir;
				break;
			}

			else if (num % num2 == 0)
			{

				goto Sec;
				break;
			}

		Fir:
			printf("It is a prime number.");
			goto END;
		Sec:
			printf("It is not a prime number.");
			goto END;

		END:
			return 0;
		}
	}
	return 0;
}