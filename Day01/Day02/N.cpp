#include <iostream>
#include <vector>
#include <algorithm>
#include<cmath>
#include <math.h>

using namespace std;

int main()
{
    long long   n;
    int counter;
    cin >> n;
    counter = n == 0 ? 1 : log10(std::abs(n)) + 1;
    cout << counter;
}