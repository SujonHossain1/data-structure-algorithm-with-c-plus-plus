#include <iostream>
#define n 4

void interchange(int arr[][n])
{
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::swap(arr[i][j], arr[n - i - 1][j]);
        }
    }
}

int main()
{
    int arr[n][n] = {
        {8, 9, 7, 6},
        {4, 7, 6, 5},
        {3, 2, 1, 8},
        {9, 9, 7, 7}};

    interchange(arr);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}