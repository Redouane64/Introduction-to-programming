#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    unsigned int N;
    unsigned long long f = 1;

    cin >> N;

    if (N < 0 || N > 12)
    {
        return 0;
    }

    for (int i = 1; i <= N; i++)
    {
        f *= i;
    }

    cout << f;
}