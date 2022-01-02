#include <iostream>
using namespace std;

int main()
{
    int x = 0, y = 0, z = 0;
    int a, b, c;
    int input;

    cin >> input;

    for (int i = 0; i < input; i++)
    {
        cin >> a >> b >> c;

        x += a;
        y += b;
        z += c;
    }

    if (x == 0 && y == 0 && z == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}