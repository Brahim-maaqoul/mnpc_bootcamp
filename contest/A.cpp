#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int n, a, b, c, cp = 1, ma;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        if (a == 1)
            cout << "1\n";
        else
        {
            if (abs(a - c) < abs(b -c))
                cout << "1\n";
            else if (abs(a - c) == abs(b -c))
                cout << "3\n";
            else
                cout << "2\n";
        }
    }
}