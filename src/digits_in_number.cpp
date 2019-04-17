#include <iostream>
#include <string>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;

    cin >> n;

    if (n > 10e9)
    {
        return 1;
    }

    int digits = 0;

    while (n > 0)
    {
        digits++;
        n = n / 10;
    }

    cout << digits;

    return 0;
}