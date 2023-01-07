#include <iostream>
#include <map>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    set <int> s;
    set <int>::iterator it;
    map <int, int> m;
    int i, k, p;
    while (1)
    {
        cin >> i;
        if (i == 0)
            break;
        if (i == 1)
        {
            cin >> k >> p;
            s.insert(p);
            m[p] = k;
        }
        else if (i == 2)
        {
            if (!s.empty())
            {
                cout << m[*s.rbegin()] << "\n";
                m.erase(*s.rbegin());
                s.erase(*s.rbegin());
            }
            else
				cout << "0\n";
        }
		else if (i == 3)
		{
			if (!s.empty())
            {
                cout << m[*s.begin()] << "\n";
                m.erase(*s.begin());
                s.erase(*s.begin());
            }
            else
				cout << "0\n";
		}
    }
}