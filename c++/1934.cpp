#include <iostream>

using namespace std;

int main() {
	int T;

	cin >> T;

	while (T--) {
		int N, M, temp;
		cin >> N >> M;

		int n = N, m = M;

		if (m < n) {
			temp = n;
			n = m;
			m = temp;
		}
		while (m % n != 0) {
			temp = m;
			m = n;
			n = temp % n;
			if (m < n) {
				temp = n;
				n = m;
				m = temp;
			}
		}

		cout << n * (N / n) * (M / n) << "\n";
	}
}