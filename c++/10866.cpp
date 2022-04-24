#include <iostream>

using namespace std;

int deque[10001];
int ptr;

int push_front(int n) {
	int tmp = n;
	for (int i = ptr; i > 0; i--) {
		deque[i] = deque[i - 1];
	}
	ptr++;
	return deque[0] = tmp;
}

int push_back(int n) {
	return deque[ptr++] = n;
}

int pop_front() {
	if (ptr == 0) {
		return -1;
	}
	else {
		int tmp = deque[0];
		for (int i = 0; i <= ptr - 2; i++) {
			deque[i] = deque[i + 1];
		}
		ptr--;
		return tmp;
	}
}

int pop_back() {
	if (ptr == 0) {
		return -1;
	}
	else {
		int tmp = deque[ptr-1];
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
		return deque[0];
	}
}
int back() {
	if (ptr == 0) {
		return -1;
	}
	else {
		return deque[ptr - 1];
	}
}

int main() {
	int N;
	cin >> N;

	while (N--) {
		string command;

		cin >> command;

		if (command == "push_front") {
			int n;
			cin >> n;
			push_front(n);
		}
		else if (command == "push_back") {
			int n;
			cin >> n;
			push_back(n);
		}
		else if (command == "pop_front") {
			cout << pop_front() << "\n";
		}
		else if (command == "pop_back") {
			cout << pop_back() << "\n";
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