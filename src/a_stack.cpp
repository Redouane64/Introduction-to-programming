//
// Created by Redouane on 17/01/2019.
//

#include <iostream>

class stack
{

private:
    int count = 0;

public:
    void push()
    {
        ++count;
    }

    void pop()
    {
        --count;
    }

    int get_count()
    {
        return this->count;
    }

    bool is_regular()
    {
        return count == 0;
    }
};

bool is_right_bracket(char & c)
{
    return c == ')' || c == '}' || c == ']' || c == '>';
}

bool is_left_bracket(char & c)
{
    return c == '(' || c == '{' || c == '[' || c == '<';
}

int main()
{
    freopen("output.txt", "w", stdout);
    freopen("input.txt", "r", stdin);

    stack * s = new stack;

    char c;
    while (std::cin >> c && s->get_count() >= 0)
    {
        if(is_left_bracket(c)) s->push();
        else if(is_right_bracket(c)) s->pop();
    }

    std::cout << s->is_regular() ? 1 : 0;

    return 0;
}