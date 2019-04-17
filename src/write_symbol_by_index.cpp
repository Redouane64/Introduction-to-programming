#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int a;

    cin >> a;

    if (a < 32 || a > 255)
    {
        return 1;
    }

    cout << (char)a;

    return 0;
}