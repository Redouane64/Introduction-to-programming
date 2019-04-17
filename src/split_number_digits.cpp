#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int N;

    cin >> N;

    /*
	if (N < 0 || N > 1e9)
	{
		return 0;
	}
	*/

    int *arr = new int[100];
    int k = 0;

    while (N != 0)
    {
        arr[k++] = N % 10;
        N = N / 10;
    }

    for (int i = k - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}