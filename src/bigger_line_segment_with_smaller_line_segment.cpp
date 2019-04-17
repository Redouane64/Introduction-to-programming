#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int x, y, l;
    cin >> x >> y >> l;

    while (1)
    {
        cout << x << " ";
        x += l;
        if (x > y)
        {
            x = y;
            break;
        }
    }

    return 0;
}