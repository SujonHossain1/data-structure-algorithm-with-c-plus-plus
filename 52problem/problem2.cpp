#include <iostream>
#include <string>
using namespace std;
#include <sstream>

int main() {
    int T;
    string getNumber;

    cin >> T;

    for (int i = 0; i < T; i++)
    {

        string str;
        cin >> str;

        char lastChar = str.back();
        int lastNumber = lastChar - 48;

        if (lastNumber % 2 == 0) {
            cout << "even" << endl;
        }
        else {
            cout << "odd" << endl;
        }
    }

}