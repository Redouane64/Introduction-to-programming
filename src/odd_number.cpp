//
// Created by Redouane on 18/01/2019.
//

#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int a, b;

    cin >> a;
    cin >> b;

    if (a % 2 != 0)
    {
        cout << a;
    }
    else if (b % 2 != 0)
    {
        cout << b;
    }
}