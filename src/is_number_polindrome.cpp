#include <iostream>
#include <string>

using namespace std;

int length(int x0, int xf)
{
    return xf - x0;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int N;
    cin >> N;

    if (N < 1 || N > 1e9)
    {
        return 1;
    }

    int tempN = N;
    int p = 1, reversed = 0;

    do
    {
        int rem = tempN % 10;

        reversed = reversed * 10 + rem;

        tempN /= 10;
        p *= 10;
    } while (tempN > 0);

    cout << ((reversed == N) ? "Yes" : "No");

    return 0;
}