// Merge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int *merge(int *a, int n, int *b, int m)
{
    int i = 0, j = 0, k = 0;
    int *c = new int[n + m];

    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i++];
        }
        else
        {
            c[k] = b[j++];
        }

        k++;
    }

    // copy any remaining elements

    while (i < n)
        c[k++] = a[i++];
    while (j < m)
        c[k++] = b[j++];

    return c;
}

int main()
{
    freopen("output.txt", "w", stdout);
    freopen("input.txt", "r", stdin);

    int n, m;

    cin >> n >> m;

    int *a = new int[n],
        *b = new int[m];

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int *merged = merge(a, n, b, m);

    for (int i = 0; i < n + m; i++)
        cout << merged[i] << " ";

    delete[] a;
    delete[] b;
    delete[] merged;

    return 0;
}