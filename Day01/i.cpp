#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);
    int n, q, a, b;

    cin >> n >> q;
    vector <int> v(n), p(n);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    p[1] = v[1];
    for (int i = 2; i <= n; i++)
        p[i] = p[i - 1] ^ v[i];
    for (int i = 0; i < q; i++)
    {
        cin >> a >> b;
        cout << (p[a - 1] ^ p[b]) << "\n";
    }
}