#include <iostream>
#include <stack>

using namespace std;

bool count(string str) {
	int length = (int)str.length();
	stack<char> stk;

	for (int i = 0;i < length;i++) {
		char c = str[i];

		if (c == '(')
			stk.push(c);
		else {
			if (stk.empty())
				return false;
			else
				stk.pop();
		}
	}
	return stk.empty();
}

int main() {
	int T;

	cin >> T;

	while (T--) {
		string str;

		cin >> str;

		if (count(str)) {
			cout << "YES" << "\n";
		}
		else {
			cout << "NO" << "\n";
		}
	}
}