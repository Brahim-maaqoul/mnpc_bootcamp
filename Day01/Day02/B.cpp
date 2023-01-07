// C++ implementation of the approach
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

void    dfs(int start, int parent, vector<vector<int> > &mat, vector<int> &vis)
{
    vis[start] = 1;
    for(int i = 0; i < mat[start].size(); i++)
    {
        if (!vis[mat[start][i]])
            dfs(mat[start][i], start, mat, vis);
    }
}

int main()
{
    int n, cp = 0;
    cin >> n;
    vector <vector<int> > mat(n);
    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
        vector <int> arr;
        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            if(a)
                arr.push_back(j);
        }
        mat[i] = arr;
    }
    for (int i = 0; i < n; i++)
    {
        if (!v[i])
        {
            dfs(i, -1, mat, v);
            cp++;
        }
    }
    cout << cp;
}
