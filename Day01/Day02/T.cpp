#include <vector>
#include <algorithm>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n, cp = 0;
    cin >> n;
    int i = 1, j;
    set <pair<int, int> > s;
    set <pair<int,int> > :: iterator it;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            int a;
            cin >> a;
            if(a)
            {
                if (i < j)
                    s.insert({i, j});
                else
                    s.insert({j, i});
            }
            j++;
        }
        i++;
    }
    for(it=s.begin();it!=s.end();it++)
      cout<< it->first << " " << it->second <<endl;
}