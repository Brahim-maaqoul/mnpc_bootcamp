#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>

using namespace std;

int main()
{
    int n, m, j = 0;

    freopen("input.txt", "r", stdin);
    cin >> n >> m;
    freopen("output.txt", "w", stdout);
    if (n > m)
    {
        for (int i = 0; i < n + m; i++)
        {
            if (i < n)
                cout << "B";
            if (j < m)
            {
                cout << "G";
                j++;
            }
        }
    }
    else
    {
        for (int i = 0; i < n + m; i++)
        {
            if (i < m)
                cout << "G";
            if (j < n)
            {
                cout << "B";
                j++;
            }
        }
    }
}