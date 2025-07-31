#include <iostream>
#include <stack>
using namespace std;

int solve(int val1, int val2, char ch) {
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

int main() {
    string s = "79+4*8/3-"; // Postfix expression
    stack<int> val;

    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i])) {
            val.push(s[i] - '0'); // Convert char to int and push to stack
        } else { // Encounter operator
            int val2 = val.top();
            val.pop();
            int val1 = val.top();
            val.pop();
            int ans = solve(val1, val2, s[i]);
            val.push(ans); // Push the result back to the stack
        }
    }

    cout << "Result: " << val.top() << endl; // Final result
    return 0;
}
