#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include<cctype>
#include<string>
#include<map>
#include<stack>
#include<cmath>
#include <numeric>
using namespace std;

int main()
{
    int i = 0;
    int j = 0;
    int n, nm;
    int e = 0;
    cin >> n;
    vector < vector<int> > m;
    while (i < n)
    {
        j = 0;
        vector<int> v1;
        while (j < n)
        {
            cin >> nm;
            v1.push_back(nm);
            e = e + nm;
            j++;
        }
        m.push_back(v1);
        i++;
    }
    e = e / 2;
    cout << e;
}