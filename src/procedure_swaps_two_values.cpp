#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int a, b;

	cin >> a >> b;

	swap(a, b);

	cout << a << " " << b;

	return 0;
}