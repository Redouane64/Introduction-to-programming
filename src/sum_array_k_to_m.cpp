#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int N, k, m;

    cin >> N >> k >> m;

    if (k < 1 || m > N || m < k)
    {
        return 1;
    }

    int *arr = new int[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = k - 1; i <= m - 1; i++)
    {
        sum += arr[i];
    }

    cout << sum;

    return 0;
}