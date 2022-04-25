#include <iostream>

using namespace std;

int S[21];

int add(int x) {
	if (S[x]) {
		return 0;
	}
	else {
		return S[x] = x;
	}
}

int remove(int x) {
	if (S[x]) {
		return S[x] = 0;
	}
	else {
		return  0;
	}
}

int check(int x) {
	if (S[x])
		return 1;
	else
		return 0;
}

int toggle(int x) {
	if (S[x])
		return S[x] = 0;
	else
		return S[x] = x;
}

void all() {
	for (int i = 1; i <= 20; i++) {
		S[i] = i;
	}
}

void empty() {
	for (int i = 1; i <= 20; i++) {
		S[i] = 0;
	}
}

int main() {
	long M;

	cin >> M;

	while (M--) {
		int x;
		string command;

		cin >> command;
		if (command == "add") {
			cin >> x;
			add(x);
		}
		else if (command == "remove") {
			cin >> x;
			remove(x);
		}
		else if (command == "check") {
			cin >> x;
			cout << check(x) << "\n";
		}
		else if (command == "toggle") {
			cin >> x;
			toggle(x);
		}
		else if (command == "all") {
			all();
		}
		else if (command == "empty") {
			empty();
		}
		/*for (int i = 1; i <= 20; i++) {
			cout << S[i] << " ";
		}*/
		cout << "\n";
	}
}