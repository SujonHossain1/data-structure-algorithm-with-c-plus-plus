#include <stdio.h>
int main()
{
    int max;
    int numbers[] = {20, 55, 23, 53, 32, 11, 33};
    int length = sizeof(numbers) / sizeof(int);

    max = numbers[0];

    for (int i = 0; i < length; i++)
    {
        int number = numbers[i];

        if (number > max)
        {
            max = number;
        }
    };

    printf("The larget number of array: %d\n", max);
}