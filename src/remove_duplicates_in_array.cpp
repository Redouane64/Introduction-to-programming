//
// Created by Redouane on 19/01/2019.
//

#include <iostream>

int main()
{
    freopen("output.txt", "w", stdout);
    freopen("input.txt", "r", stdin);

    int size; std::cin >> size;

    int * arr = new int[size], * result = new int[size], m = 0;

    for (int i = 0; i < size; ++i) std::cin >> arr[i];

    bool exist = false;

    for (int j = 0; j < size; ++j) {
        int value = arr[j];
        for (int k = 0; k < m; ++k) {
            if(value == result[k])
            {
                exist = true;
                break;
            }
        }

        if(!exist)
        {
            result[m] = value;
            ++m;
        }

        exist = false;
    }

    for (int n = 0; n < m; ++n) std::cout << result[n] << " ";

    return 0;
}