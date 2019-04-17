#include <iostream>
#include <string>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int N;

    cin >> N;

    int *arr = new int[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int *evens = new int[N];
    int k = 0;

    for (int i = 0; i < N; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evens[k++] = arr[i];
        }
    }

    for (int i = 0; i < k; i++)
    {
        cout << evens[i] << " ";
    }

    return 0;
}