#include <iostream>
using namespace std;

int main()
{
    int T, n;
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        cin >> n;

        cout << "Case " << i << ":";
        for (int j = 1; j <= n; j++)
        {
            if (n % j == 0)
            {
                cout << " " << j;
            }
        }

        cout << endl;
    }
}