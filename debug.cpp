#include <iostream>
using namespace std;

int main()
{
    int num, i = 0;

    cout << "Enter an integer number : ";
    cin >> num;

    while (i < num)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
        i++;
    }
}