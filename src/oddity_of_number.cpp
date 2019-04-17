#include <iostream>
#include <string>

using namespace std;

bool isOdd(int value)
{
    return value % 2 != 0;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int a, b;

    cin >> a >> b;

    if ((isOdd(a) || isOdd(b)) && !(isOdd(a) && isOdd(b)))
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
}