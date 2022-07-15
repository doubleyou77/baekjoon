#include <iostream>
#include <stack>

using namespace std;

char a[600000];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> a;
	stack<char> left, right;
	int n = strlen(a);

	for (int i = 0; i < n; i++) {
		left.push(a[i]);
	}

	int m;
	cin >> m;

	while (m--) {
		char command;
		cin >> command;
		if (command == 'L') {
			if (!left.empty()) {
				right.push(left.top());
				left.pop();
			}
		}
		else if (command == 'D') {
			if (!right.empty()) {
				left.push(right.top());
				right.pop();
			}
		}
		else if (command == 'B') {
			if (!left.empty()) {
				left.pop();
			}
		}
		else {
			char add;
			cin >> add;
			left.push(add);
		}
	}
	while (!left.empty()) {
		right.push(left.top());
		left.pop();
	}
	while (!right.empty()) {
		cout << right.top();
		right.pop();
	}
	cout << "\n";
}

