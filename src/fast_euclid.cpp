//
// Created by Redouane on 19/01/2019.
//

#include <iostream>

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int a, b; std::cin >> a >> b;

    int shift;

    if (a == 0) std::cout << b;
    if (b == 0) std::cout << a;

    for (shift = 0; ((a | b) & 1) == 0; ++shift) {
        a >>= 1;
        b >>= 1;
    }

    while ((a & 1) == 0)
        a >>= 1;

    do {
        while ((b & 1) == 0)
            b >>= 1;

        if (a > b) {
            unsigned int t = b; b = a; a = t;
        }

        b -= a;
    } while (b);

    std::cout << (a << shift);

    return 0;
}