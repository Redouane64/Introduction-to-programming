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

    a = a + b;
    b = a - b;
    a = a - b;

    cout << a << " " << b;
}