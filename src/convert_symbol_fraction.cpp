#include <iostream>
#include <string>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string number;

    cin >> number;

    int pow = 1, frac = 1;
    bool isNegative = false;
    double result = 0;

    for (int i = number.length() - 1; i >= 0; i--)
    {
        if (number[i] == '-')
        {
            isNegative = true;
            continue;
        }
        else if (number[i] == '.')
        {
            frac = pow;
            continue;
        }

        int code = (int)number[i];
        if (code >= 48 && code <= 57)
        {
            int digit = (code - 48) * pow;
            result += digit;
            pow *= 10;
        }
        else
            return 1;
    }

    if (isNegative)
        result *= -1;

    cout << result / frac;

    return 0;
}