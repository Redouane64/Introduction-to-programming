//
// Created by Redouane on 20/03/2019.
//

#include <iostream>
#include <cmath>

int main()
{

    std::cout.flush();
    std::cout.precision(6);

    const float EPSILON = 0.001f;
    float X = 1, f, df, r;

    do
    {
        std::cout << "? " << X << std::endl;

        std::cin >> f >> df;
        r = f / df;
        X -= r;
    } while(fabsf(r) > EPSILON);

    std::cout << "! " << X << std::endl;

    return 0;
}