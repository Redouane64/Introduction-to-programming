//
// Created by Redouane on 18/01/2019.
//

#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, rem, bin = 0, p = 1;

    cin >> n;


    while (n != 0)
    {
        rem = n % 2;
        bin += rem * p;

        n = n / 2;

        p *= 10;
    }

    cout << bin;
}