#include <iostream>

using namespace std;

int main() {
	int N, M;

	cin >> N >> M;

	int box = 1, nowWeight = 0;
	while (N--) {
		int n;
		cin >> n;

		if (nowWeight + n <= M) {
			nowWeight += n;
		}
		else if (nowWeight + n > M) {
			nowWeight = n;
			box++;
		}
	}

	cout << box;
}