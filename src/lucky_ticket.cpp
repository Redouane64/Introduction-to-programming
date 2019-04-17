#include <iostream>
#include <string>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int ticket;

    cin >> ticket;

    int leftSum = 0, rightSum = 0, power = 100000;

    while (power >= 1)
    {
        int digit = ticket / power;

        if (power < 1000)
            leftSum += digit;
        else
            rightSum += digit;

        ticket -= power * digit;
        power /= 10;
    }

    if (leftSum == rightSum)
        cout << 1;
    else
        cout << 0;
}