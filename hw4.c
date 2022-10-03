#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num,num2;
	printf("Please enter a number.: ");
	scanf("%d", &num);

	for (num2 = 2; num / num2; num2++)
	{
		if (num / num2 == 1)
		{
			goto Fir;
		}

		else if (num % num2 == 0)
		{
			goto Sec;
		}
		else
			goto Thr;

	Fir:
		printf("It is a prime number.");
		goto END;
	Sec:
		printf("It is not a prime number.");
		goto END;
	Thr:
		printf("It is not a prime number.");
		goto END;

	END:
		return 0;
	}
		return 0;
	}