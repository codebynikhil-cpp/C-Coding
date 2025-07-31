#include <iostream>
#include <stack>
using namespace std;
string solve(string val1, string val2, char ch){
    // we have to store prefix in the ans
    // prefix is -> op v1 v2
    string s = "";
    s.push_back(ch);
    s += val1;
    s += val2;
    return s;
}
int prio(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    else if (ch == '*' || ch == '/')
        return 2;
    else
        return 0; // For '(' and other invalid cases
}
int main()
{
    string s = "(7+9)*4/8-3"; // Infix expression
    stack<string> val;
    stack<char> op;

    for (int i = 0; i < s.length(); i++)
    {
        if (isdigit(s[i]))
        {
            val.push(to_string(s[i] - 48));
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
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(val1,val2,ch);
                    val.push(ans);
                }
                op.pop(); // Remove '('
            }
            else
            {
                while (!op.empty() && prio(s[i]) <= prio(op.top()))
                {
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(val1,val2,ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }

    while (!op.empty())
    {
        char ch = op.top();
        op.pop();
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();
        string ans = solve(val1,val2,ch);
        val.push(ans);
    }

    cout << val.top();
    return 0;
}