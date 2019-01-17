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

    if (b == 0)
    {
        cout << "R";
    }
    else if (a == 0)
    {
        cout << "NO SOLUTION";
    }
    else
    {
        int s = -b / a;
        cout << s;
    }
}