#include <iostream>
using namespace std;

int lastKids(int kids, int toys)
{
    if (kids >= toys)
    {
        return toys;
    }
    else
    {
        int index = toys % kids;
        return index;
    }
}

int main()
{
    int result = lastKids(6, 5);
    cout << "Last kids " << result << endl;
}