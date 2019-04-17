#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    long long N;

    cin >> N;

    if (N < 0 || N > 1e9)
    {
        return 1;
    }

    long long *arr = new long long[10];
    int k = 0;

    while (N != 0)
    {
        int rem = N % 10, exist = 0;
        for (int u = 0; u < k; u++)
            if (arr[u] == rem)
                exist = 1;
        if (!exist)
            arr[k++] = rem;

        N = N / 10;
        exist = 0;
    }

    for (int i = 0; i < k; i++)
        for (int j = 0; j < k; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }

    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}