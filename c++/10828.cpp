#include <iostream>

using namespace std;

int stk[10000];
int ptr;

int push(int n) {
	return stk[ptr++] = n;
}

int pop() {
	if (ptr == 0) {
		return -1;
	}
	else {
		return stk[--ptr];
	}
}

int size() {
	return ptr;
}

bool empty() {
	if (ptr == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

int top() {
	if (ptr == 0) {
		return -1;
	}
	else {
		return stk[ptr-1];
	}
}

int main() {
	int N;
	cin >> N;

	ptr = 0;
	while (N--) {
		string command;
		cin >> command;

		if (command == "push") {
			int n;
			cin >> n;
			push(n);
		} 
		else if (command == "pop") {
			cout << pop() << "\n";
		}
		else if (command == "size") {
			cout << size() << "\n";
		}
		else if (command == "empty") {
			cout << empty() << "\n";
		}
		else if (command == "top") {
			cout << top() << "\n";
		}
	}
}