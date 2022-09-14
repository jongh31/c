#include<stdio.h>
int main(void)
{
	int num1, num2;

	printf("Input two integers: ");
	scanf("%d %d", &num1, &num2);

	int a = num1 & num2;
	int o = num1 | num2;
	int x = num1 ^ num2;

	printf("%d & %d = %d \n",num1, num2, a);
	printf("%d | %d = %d \n", num1, num2, o);
	printf("%d ^ %d = %d \n", num1, num2, x);

	return 0;
}