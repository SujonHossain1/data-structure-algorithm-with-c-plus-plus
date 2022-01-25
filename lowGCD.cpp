#include <iostream>
using namespace std;

int findMinExitNumber(int num1, int num2)
{
    int min_number = min(num1, num2);

    int larget_exit_number = 0;

    for (int i = 1; i <= min_number; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            larget_exit_number = i;
        }
    }

    return larget_exit_number;
}

int main()
{
    int result = findMinExitNumber(50, 23);
    cout << "result " << result << endl;
};
