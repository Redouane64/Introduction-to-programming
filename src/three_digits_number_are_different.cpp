#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int N;

    cin >> N;

    if (N > 999 || N < 100)
    {
        cout << 1;
        return 0;
    }

    int h = N / 100,
        t = (N - h * 100) / 10,
        u = N - t * 10 - h * 100;

    int digits[] = {u, t, h};

    if (u == h || u == t || t == h)
    {
        cout << 0;
        return 0;
    }

    cout << 1;
}