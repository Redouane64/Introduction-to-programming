//
// Created by Redouane on 18/01/2019.
//

#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;

    cin >> n;

    int h = n / 100,
            t = (n - h * 100) / 10,
            u = n - t * 10 - h * 100;


    cout << h << " " << t << " " << u;
}