//
// Created by Redouane on 19/01/2019.
//

#include <iostream>

int main()
{
    freopen("output.txt", "w", stdout);
    freopen("input.txt", "r", stdin);

    int n; std::cin >> n;
    int * arr = new int[n], * new_arr = new int[n + 1];

    for (int i = 0; i < n; ++i) std::cin >> arr[i];

    int k, v; std::cin >> k >> v;

    for (int i = 0; i <= k; ++i) {
        new_arr[i] = arr[i];
    }

    new_arr[k - 1] = v;

    for (int i = k; i <= n; ++i) {
        new_arr[i] = arr[i - 1];
    }

    // print array.
    for (int i = 0; i <= n; ++i) std::cout << new_arr[i] << " ";

    return 0;
}