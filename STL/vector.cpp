#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> v;
    vector<pair<int, int> > v2;

    v2.push_back({2, 3});

    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    v.pop_back();

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}