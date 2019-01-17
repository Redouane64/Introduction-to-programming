//
// Created by Redouane on 18/01/2019.
//

#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int diff, a, b;

    cin >> a;
    cin >> b;
    diff = a - b;

    cout << diff;
}