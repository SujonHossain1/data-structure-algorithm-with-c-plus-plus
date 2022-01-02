#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Hello World" << endl;

    for (int i = 0; i < n; i++)
    {
        int num, digit, rev = 0;

        num = i;

        while (num != 0)
        {
            digit = num % 10;
            rev = (rev * 10) + digit;
            num = num / 10;
        }
    }
}