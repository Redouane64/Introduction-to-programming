//
// Created by Redhouane on 14/08/2019.
//

#include <iostream>

using namespace std;

void sum(int a, int b, int &result)
{
    result = a + b;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int a, b;

    cin >> a >> b;

    if (a < -1e9 || a > 1e9)
        return 1;

    if (b < -1e9 || b > 1e9)
        return 1;

    int result;
    sum(a, b, result);

    cout << result;

    return 0;
}