#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;

        if (value > 1e5)
            return 1;

        arr[i] = value;
    }

    int index = -1; // index of repeated value.
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;

            if (arr[i] == arr[j])
            {
                index = i;
                break;
            }
        }

    if (index != -1)
        cout << arr[index];

    return 0;
}
