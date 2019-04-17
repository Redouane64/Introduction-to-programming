#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    unsigned long long N, M;

    cin >> N >> M;

    if (N > 1e18 || M > 1e18 || N < 0 || M < 0)
    {
        return 1;
    }

    unsigned long long tempN = N;
    unsigned long long tempM = M;

    int i;
    unsigned long long *Ndigits = new unsigned long long[19];
    for (i = 0; tempN > 0; i++)
    {
        Ndigits[i] = tempN % 10;
        tempN = tempN / 10;
    }

    int j;
    unsigned long long *Mdigits = new unsigned long long[19];

    for (j = 0; tempM > 0; j++)
    {
        Mdigits[j] = tempM % 10;
        tempM = tempM / 10;
    }

    if (i > j)
    {
        cout << N;
    }
    else if (i < j)
    {
        cout << M;
    }
    else
    {
        for (int k = i - 1; k >= 0; k--)
        {
            if (Ndigits[k] > Mdigits[k])
            {
                cout << N;
                return 0;
            }
            else if (Ndigits[k] < Mdigits[k])
            {
                cout << M;
                return 0;
            }
        }
    }

    return 0;
}