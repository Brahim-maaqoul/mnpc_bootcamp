#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n, cp = 0;
    vector <int > arr(1e6 + 1);
    arr[1] = 0;
    for (int i = 2; i <= 1e6; i++)
    {
        int min = 1e9;
        if(i % 2 == 0 && arr[i/ 2] + 1 < min)
            min = arr[i / 2] + 1;
        if(i % 3 == 0 && arr[i/ 3] + 1 < min)
            min = arr[i / 3] + 1;
        if(arr[i - 1] + 1  < min)
            min = arr[i - 1] + 1;
        arr[i] = min;
    }
    
    while (cin >> n)
        cout << arr[n] << "\n";
}