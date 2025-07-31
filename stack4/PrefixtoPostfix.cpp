#include <iostream>
#include <stack>
using namespace std;

string solve(string val1, string val2, char ch) {
    string s = "";
    s += val1;
    s += val2;
    s.push_back(ch);
    return s;
}

int main() {
    string s = "-/*+79483"; // Postfix expression
    stack<string> val;

    for (int i = s.length()-1; i >=0 ; i--) { //reverse
        if (isdigit(s[i])) {
            val.push(to_string(s[i] - '0')); // Convert char to int and push to stack
        } else { // Encounter operator
            string val1 = val.top();
            val.pop();
            string val2 = val.top();
            val.pop();
            string ans = solve(val1, val2, s[i]);
            val.push(ans); // Push the result back to the stack
        }
    }

    cout << "Result: " << val.top() << endl; // Final result
    return 0;
}
