#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int	n, cp = 0;

	cin >> n;
	vector <int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	sort(v.begin(), v.end(), greater<int>());
	for (int i = 0; i < n; i++)
	{
		if ((v[i] - i) <= 0)
			cp += 0;
		else
			cp += v[i] - i;
	}
	cout << cp;
}