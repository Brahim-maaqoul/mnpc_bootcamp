#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;  
  
long long gcd(long long a, long long b)
{  
	if (b == 0) 
		return a;  
	return gcd(b, a % b); 
}

int main()
{
    long long   a, b, c, d;

    cin >> a >> b >> c >> d;
    cout << gcd(abs(c - a), abs(d - b)) + 1;
}