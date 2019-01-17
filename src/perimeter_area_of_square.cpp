//
// Created by Redouane on 18/01/2019.
//

#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int size, s, p;

    cin >> size;

    s = size * size;
    p = (size + size) * 2;

    cout << p << " " << s;
}