#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int	n, a, b, num = 0, cp = 0;

	cin >> n;
	vector <pair<int, int> > v;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		v.push_back({a, 1});
		v.push_back({b, -1});
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
	{
		num += v[i].second;
		cp = max(cp, num);
	}
	cout << cp;
}