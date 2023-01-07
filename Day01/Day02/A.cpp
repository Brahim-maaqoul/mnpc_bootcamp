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
    vector <int> arr(n);
    vector <vector<int> > mat(n, arr);
    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            if(a)
            {
                arr.push_back(j);
                cp++;
            }
        }
        mat[i] = arr;
    }
    dfs(0, -1, mat, v);
    for (int i = 0; i < n; i++)
    {
        if (!v[i])
        {
            cout << "NO";
            return (0);
        }
    }
    if ((cp / 2) == n - 1)
        cout << "YES";
    else
        cout << "NO";
}
