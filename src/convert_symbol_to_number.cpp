#include <iostream>
#include <string>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string number;

    cin >> number;

    int pow = 1, result = 0;
    for (int i = number.length() - 1; i >= 0; i--)
    {
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

    cout << result;

    return 0;
}