//
// Created by Redouane on 18/01/2019.
//

#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int numbers[3];

    cin >> numbers[0];
    cin >> numbers[1];
    cin >> numbers[2];

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

    cout << numbers[0] << " " << numbers[1] << " " << numbers[2];

}