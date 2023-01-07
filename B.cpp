#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, m, b = 0;

    cin >> n;
    vector <int> t(n), a;
    for (int i = 0; i < n; i++)
        cin >> t[i];
    cin >> m;
    vector <int> t1(m);
    for (int i = 0; i < m; i++)
        cin >> t1[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (t[i] == t1[j])
            {
                b = 1;
                break;
            }
            b = 0;
        }
        if (b == 0)
            a.push_back(t[i]);
    }
    cout << a.size() << "\n";
    for (int i = 0; i < a.size(); i++)
    {
		if (i + 1 == a.size())
			cout << a[i];
		else
			cout << a[i] << " ";
    }
}