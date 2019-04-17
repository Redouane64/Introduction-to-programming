#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int a, b;
    cin >> a >> b;

    while (1)
    {
        int rem = a % b;

        if (!rem)
            break;

        a = b;
        b = rem;
    }

    cout << b;

    return 0;
}