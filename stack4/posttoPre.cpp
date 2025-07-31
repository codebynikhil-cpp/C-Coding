#include <iostream>
#include <stack>
using namespace std;

string solve(string val1, string val2, char ch) {
    string s = "";
    s.push_back(ch);
    s += val1;
    s += val2;
    return s;
}

int main() {
    string s = "79+4*8/3-"; // Postfix expression
    stack<string> val;

    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i])) {
            val.push(to_string(s[i] - '0')); // Convert char to int and push to stack
        } else { // Encounter operator
            string val2 = val.top();
            val.pop();
            string val1 = val.top();
            val.pop();
            string ans = solve(val1, val2, s[i]);
            val.push(ans); // Push the result back to the stack
        }
    }

    cout << "Result: " << val.top() << endl; // Final result
    return 0;
}
