#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;

    cin >> n;
    if (n > 100)
        return (0);
    vector <int> t(n);
    for (int i = 0; i < n; i++)
        cin >> t[i];
    for (int i = 0; i < n; i++)
    {
        if (t[i] >= 0)
            t[i] += 2;
		if (i + 1 == n)
			cout << t[i];
		else
			cout << t[i] << " ";
    }
}