#include <iostream>

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int numbers[3];

    std::cin >> numbers[0];
    std::cin >> numbers[1];
    std::cin >> numbers[2];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            if (numbers[i] < numbers[j])
            {
                int t = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = t;
            }
        }
    }

    std::cout << numbers[1];
}