#include <iostream>

using namespace std;

int gcd(int a, int b) {
	while (b != 0) {
		int tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;

	cin >> T;

	while (T--) {
		int n, result = 0;
		cin >> n;

		int a[100];

		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		for (int i = 0; i < n-1; i++) {
			for (int j = i + 1; j < n; j++) {
				result += gcd(a[i], a[j]);
			}
		}
		cout << result << "\n";
	}
}