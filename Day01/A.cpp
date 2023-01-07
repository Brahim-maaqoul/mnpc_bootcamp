#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, q, l, m, cp;

    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> l >> m;
        if (l == m)
            cout << v[l] << "\n";
        else
        {
            cp = 0;
            for (int j = l; j < n; j++)
            {
                cp += v[j];
                if (j == m)
                {
                    cout << cp << "\n";
                    break ;
                }
            }
        }
    }
}