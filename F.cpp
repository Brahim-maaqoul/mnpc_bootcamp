#include <iostream>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

char asciitolower(char in) {
    if (in <= 'Z' && in >= 'A')
        return in - ('Z' - 'z');
    return in;
}

int main()
{
    string str;
    string delim = " ";
    size_t pos = 0;
    set <string> s;
	while (getline(cin, str))
	{
		transform(str.begin(), str.end(), str.begin(), asciitolower);
		int i = 0, j;
		for (j = 0; str[j]; j++)
		{
			if (!islower(str[j]))
			{
				if (i != j)
					s.insert(str.substr(i, j - i));
				i = j + 1;
			}
		}
		if (i != j)
			s.insert(str.substr(i, j - i));
	}
	for (auto it = s.begin(); it != s.end(); ++it)
        cout << *it << "\n";
}