#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int l;

    cin >> l;

    int *even = new int[l], *odd = new int[l];

    int o = 0, e = 0;
    for (int i = 0; i < l; i++)
    {
        int x;
        cin >> x;

        if (x % 2 == 0)
        {
            even[e++] = x;
        }
        else
        {
            odd[o++] = x;
        }
    }

    for (int i = 0; i < e; i++)
    {
        cout << even[i] << " ";
    }

    for (int i = 0; i < o; i++)
    {
        cout << odd[i] << " ";
    }

    delete[] even;
    delete[] odd;

    return 0;
}