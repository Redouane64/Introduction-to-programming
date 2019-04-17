#include <iostream>
#include <string>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n = 0;

    cin >> n;

    if (n < 1)
    {
        return 1;
    }

    int *arr = new int[n];

    for (int i = n - 1; i >= 0; i--)
    {
        int k = -1;
        cin >> k;
        arr[i] = k;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    delete arr;

    return 0;
}