#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int n, i = 2;

    cin >> n;
    map <int, int> m;
    while (n > 1)
    {
        while (n % i == 0)
        {
            m[i]++;
            n /= i;
        }
        i++;
    }
    for (auto it = m.begin(); it != m.end(); it++)
    {
        if (it != m.begin())
            cout << "*";
        cout << it->first;
        if (it->second != 1)
            cout << "^" << it->second;
    }
}
