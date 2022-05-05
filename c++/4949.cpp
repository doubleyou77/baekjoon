#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool count(string str) {
    int length = (int)str.length();
    stack<char> kind;
    stack<char> stk;

    for (int i = 0; i < length; i++) {
        char c = str[i];
        if (c == '(' || c == '[') {
            stk.push(c);
            kind.push(c);
        }
        else if (c == '[') {
            stk.push(c);
            kind.push(c);
        }
        else if (c == ')' || c == ']') {
            if (stk.empty()) {
                return 0;
            }
            else if (c == ')' && kind.top() == '(') {
                stk.pop();
                kind.pop();
            }
            else if (c == ']' && kind.top() == '[') {
                stk.pop();
                kind.pop();
            }
            else
                return false;
        }
    }
    return stk.empty();
}

int main() {
    while (1) {
        string str;

        getline(cin, str);

        if (str == ".") {
            return 0;
        }
        else if (count(str)) {
            cout << "yes\n";
        }
        else if (!count(str)) {
            cout << "no\n";
        }
    }
}