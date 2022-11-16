#define _NON_FLOAT_ARGUMENT_TO_FORMAT_FUNCTION
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
float calculateSD(float data[]);

int main()
{
    int i;
    float number[5];

    printf("Enter 5 real numbers: ");
    for (i = 0; i < 5; ++i)
        scanf("%f", &number[i]);
    printf("Standard Deviation = %.3f", calculateSD(number));
    return 0;
}

float calculateSD(float data[])
{
    float sum = 0.0, average, SD = 0.0;
    int i;

    for (i = 0; i < 5; ++i) {
        sum += data[i];
    }
    average = sum / 5;

    for (i = 0; i < 5; ++i)
        SD += pow(data[i] - average, 2);
    return sqrt(SD / 5);
}
