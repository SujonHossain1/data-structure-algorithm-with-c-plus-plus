#include <iostream>
#include <cmath>
using namespace std;

int isPrime(int n);

int main()
{
    int num;

    printf("Enter the number");
    scanf("%d", &num);

    int prime = isPrime(num);

    if (prime == 0)
        printf("Not Prime Number: \n");
    else
        printf("Prime Number \n");
}

int isPrime(int n)
{
    int limit = sqrt(n + 1);
    if (n <= 1)
        return 0;

    for (int i = 2; i < limit; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}