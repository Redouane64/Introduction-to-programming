#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int *arr = new int[1024 * 1024];

    int k = 0;
    int temp = 0;
    while (cin >> temp)
    {
        arr[k++] = temp;
    }

    int *rev = new int[k];

    for (int i = 0; i < k; i++)
    {
        rev[i] = arr[k - i - 1];
    }

    for (int i = 0; i < k; i++)
        cout << rev[i] << " ";

    delete[] arr;
    delete[] rev;

    return 0;
}