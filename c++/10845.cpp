#include <iostream>

using namespace std;

int queue[10000];
int ptr;

int push(int n) {
	return queue[ptr++] = n;
}

int pop() {
	if (ptr == 0) {
		return -1;
	}
	else {
		int tmp = queue[0];
		for (int i = 0; i <= ptr - 2; i++) {
			queue[i] = queue[i + 1];
		}
		ptr--;
		return tmp;
	}
}

int size() {
	return ptr;
}

int empty() {
	if (ptr == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

int front() {
	if (ptr == 0) {
		return -1;
	}
	else {
		return queue[0];
	}
}
int back() {
	if (ptr == 0) {
		return -1;
	}
	else {
		return queue[ptr - 1];
	}
}

int main() {
	int N;
	cin >> N;

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
		else if (command == "front") {
			cout << front() << "\n";
		}
		else if (command == "back") {
			cout << back() << "\n";
		}
	}
}