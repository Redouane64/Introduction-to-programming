#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;

    cin >> n;

    int h = n / 100;
    int l = n - h * 100;

    if (l % 10 == h / 10 && h % 10 == l / 10)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
}