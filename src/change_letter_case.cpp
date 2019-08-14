#include <iostream>
#include <string>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string str;

    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        char c = str[i];
        if (c >= 65 && c <= 90)
        {
            str[i] = c + (char)32;
        }
        else if(c >= 97 && c <= 122)
        {
            str[i] = c - (char)32;
        }
    }

    cout << str;

    return 0;
}