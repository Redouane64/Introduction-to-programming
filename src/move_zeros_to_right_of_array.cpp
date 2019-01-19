//
// Created by Redouane on 17/01/2019.
//

#include <iostream>

int main()
{
    freopen("output.txt", "w", stdout);
    freopen("input.txt", "r", stdin);

    int len;
    std::cin >> len;

    int * arr = new int[len], * result = new int[len] { 0 };
    for(int i = 0; i < len; i++) std::cin >> arr[i];

    for (int i = 0, j = 0; i < len; ++i) {
        if(arr[i] != 0)
        {
            result[j++] = arr[i];
        }
    }

    delete[] arr;

    for (int i = 0; i < len; ++i) std::cout << result[i] << " ";

    return 0;
}