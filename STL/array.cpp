#include <iostream>
#include <array>
using namespace std;
// a[] passes the memory location of a[0];
// int func(int a[])
// {
// }

int main()
{
    int a[] = {4, 5, 6, 7, 9};
    // int *a = int [10];
    array<int, 5> my_array = {1, 2, 3, 4, 5};

    for (int i = 0; i < my_array.size(); i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}