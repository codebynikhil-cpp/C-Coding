#include <iostream>
#include <stack>
using namespace std;

int prio(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    else if (ch == '*' || ch == '/')
        return 2;
    else
        return 0; // For '(' and other invalid cases
}

int solve(int val1, int val2, char ch)
{
    if (ch == '+')
        return val1 + val2;
    else if (ch == '-')
        return val1 - val2;
    else if (ch == '*')
        return val1 * val2;
    else if (ch == '/')
        return val1 / val2;
    return 0;
}

int main()
{
    string s = "(7+9)*4/8-3"; // Infix expression
    stack<int> val;
    stack<char> op;

    for (int i = 0; i < s.length(); i++)
    {
        if (isdigit(s[i]))
        {
            val.push(s[i] - '0');
        }
        else
        {
            if (s[i] == '(')
                op.push(s[i]);
            else if (s[i] == ')')
            {
                while (!op.empty() && op.top() != '(')
                {
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    val.push(solve(val1, val2, ch));
                }
                op.pop(); // Remove '('
            }
            else
            {
                while (!op.empty() && prio(s[i]) <= prio(op.top()))
                {
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    val.push(solve(val1, val2, ch));
                }
                op.push(s[i]);
            }
        }
    }

    while (!op.empty())
    {
        char ch = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        val.push(solve(val1, val2, ch));
    }

    cout << val.top();
    return 0;
}
adf 