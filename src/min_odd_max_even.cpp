//
// Created by Redouane on 19/01/2019.
//

#include <iostream>
#include <climits>

int main()
{
    freopen("output.txt", "w", stdout);
    freopen("input.txt", "r", stdin);

    int min_odd = INT_MAX, max_even = INT_MIN, size; std::cin >> size;

    while (size)
    {
        int value; std::cin >> value;

        if(value % 2)
        {
            // odd.
            if(value < min_odd) min_odd = value;
        }
        else
        {
            // even.
            if(value > max_even) max_even = value;
        }

        --size;
    }

    std::cout << ((min_odd == INT_MAX) ? -1 : min_odd) << " "
              << ((max_even == INT_MIN) ? -1 : max_even);

    return 0;
}
