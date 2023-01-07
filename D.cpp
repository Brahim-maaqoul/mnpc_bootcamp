#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    string str;
    set <int> a;
    set <int>::iterator it;
    int i;
    while (cin >> str && cin >> i)
    {
        if (str == "insert")
        {
            it = a.find(i);
            if (it == a.end())
                a.insert(i);
        }
        else if (str == "delete")
        {
            it = a.find(i);
            if (it != a.end())
                a.erase(i);
        }
        else if (str == "exists")
        {
            it = a.find(i);
            if (it == a.end())
                cout << "false" << "\n";
            else
                cout << "true" << "\n";
        }
    }
}