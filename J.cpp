#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int i, j, cp;
    string str;
    cin >> str;
    cin >> i >> j;
    i--;
    j--;
    for (int k = 0; k < i; k++)
        cout << str[k];
   for (int k = j; k >= i; k--)
        cout << str[k];
    for (int i = j + 1; i < str.size(); i++)
        cout << str[i];
}