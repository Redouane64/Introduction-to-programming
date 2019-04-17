#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int x0, y0, r, x, y;

    cin >> x0 >> y0 >> r >> x >> y;

    if ((pow((x - x0), 2) + pow((y - y0), 2)) == r * r)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
}