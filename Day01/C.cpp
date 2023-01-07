#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int	n, x;
    long long sum = 0, cp = 0;
    cin >> n >> x;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    map <long long, int> m;

    m[0]++;
    for (int i = 0; i < n; i++)
    {
       sum += v[i];
       cp += m[sum - x];
       m[sum]++;
    }
    cout << cp;
}