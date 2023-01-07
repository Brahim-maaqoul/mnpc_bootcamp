#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int	ft_is_prime(int	nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
    int sq = sqrt(nb);
	while (i <= sq)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main()
{
    int n;

    cin >> n;
    if (ft_is_prime(n))
        cout << "Yes";
    else
        cout << "No";
}