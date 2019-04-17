#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    if (n > 46)
        return 1;

    int fib1 = 0, fib2 = 1, fib = fib1, count = 1;

    while (count++ < n)
    {
        fib = fib1 + fib2;

        fib2 = fib1;
        fib1 = fib;
    }

    cout << fib;

    return 0;
}