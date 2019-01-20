//
// Created by Redouane on 20/01/2019.
//

#include <iostream>

int main()
{
    freopen("output.txt", "w", stdout);
    freopen("input.txt", "r", stdin);

    int size; std::cin >> size;

    std::string * words = new std::string[size];

    bool exist = false;
    int i, k;

    for (i = 0, k = 0; i < size; ++i) {
        std::string word; std::cin >> word;
        for (int j = 0; j < k; ++j) {
            if(words[j] == word)
                exist= true;
        }

        if(!exist) words[k++] = word;

        exist = false;
    }

    for (i = 0; i < k; ++i) std::cout << words[i] << " ";

    return 0;
}