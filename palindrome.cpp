#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        int num = i, digit = 0, rev = 0;

        while (num != 0)
        {
            digit = num % 10;
            rev = (rev * 10) + digit;
            num = num / 10;
        }

        if (i == rev)
        {
            cout << rev << " ";
        }
    }
    cout << endl;
}