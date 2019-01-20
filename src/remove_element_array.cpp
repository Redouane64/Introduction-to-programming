//
// Created by Redouane on 19/01/2019.
//

#include <iostream>

int main()
{
    freopen("output.txt", "w", stdout);
    freopen("input.txt", "r", stdin);

    int size; std::cin >> size;
    int * arr = new int[size];

    for (int i = 0; i < size; ++i) std::cin >> arr[i];

    int index; std::cin >> index;
    --index;

    for (int j = index; j < size - 1; ++j) arr[j] = arr[j + 1];

    for (int i = 0; i < size - 1; ++i) std::cout << arr[i] << " ";

    return 0;
}