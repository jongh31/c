#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int num = 5;
    for (int i = 0; i < num; i++) {
        for (int s = num - 1; s > i; s--) {
            printf(" ");
        }
        for (int s = 0; s < 2 * i + 1; s++) {
            printf("*");
        }
        printf("\n");
    }
}