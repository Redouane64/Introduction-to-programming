//
// Created by Redouane on 19/01/2019.
//

#include <iostream>
#include <cmath>

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n; std::cin >> n;

	int divs = 0;

	for (int i = 1; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			if (n / i == i)
				divs++; // i is divisor.
			else
				divs += 2; // i  and n / i are divisors.
		}
	}

	std::cout << divs;

	return 0;
}
