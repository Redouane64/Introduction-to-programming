#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, sum = 0;

    cin >> n;

    if (n > 0)
    {

        for (int i = 0; i < n; i++)
        {
            int number;
            cin >> number;

            if (number % 2 == 0)
            {
                sum += number;
            }
        }
    }

    cout << sum;
}