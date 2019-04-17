#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int N;
    cin >> N;

    if (N > 1e5)
    {
        return 1;
    }

    int *numbers = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> numbers[i];
    }

    for (int i = 0; i < N - 1; i++)
        for (int j = 0; j < N - 1; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }

    for (int i = 0; i < N; i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}