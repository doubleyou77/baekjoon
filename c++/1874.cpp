#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	stack<int> stk;
	string result;
	int point = 0;
	int n;

	cin >> n;

	while (n--) {
		int x;
		cin >> x;

		if (x > point) {
			while (x > point) {
				stk.push(++point);
				result += '+';
			}
			stk.pop();
			result += '-';
		}
		else if (x <= point) {
			bool check = false;
			if (!stk.empty()) {
				if (x == stk.top()) {
					check = true;
				}
				stk.pop();
				result += '-';
			}
			if (!check) {
				cout << "NO";
				cout << "\n" << stk.top();
				return 0;
			}
		}
	}

	for (int i = 0; i < result.length(); i++) {
		cout << result[i] << "\n";
	}
	
}