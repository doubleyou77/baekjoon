#include <iostream>
#include <queue>

using namespace std;

int main() {
	deque<int> d;

	int N, K;

	cin >> N >> K;

	for (int i = 1; i <= N; i++) {
		d.push_back(i);
	}

	cout << "<";

	while (!d.empty()) {
		for (int i = 0; i < K - 1; i++) {
			d.push_back(d.front());
			d.pop_front();
		}

		if (d.size() == 1) {
			cout << d.front();
		}
		else {
			cout << d.front() << ", ";
		}

		d.pop_front();
	}

	cout << ">";
}
