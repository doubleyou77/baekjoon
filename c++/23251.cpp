#include <iostream>

using namespace std;

int main() {
	int T;

	cin >> T;

	while (T--) {
		int k, i = 1, result = 0;

		cin >> k;


		while (k != 0) {
			result += (k % 10 * i * 23);
			cout << k % 10*i * 23 << " ";
			k /= 10;
			i *= 10;
		}
		cout << "\n" << result << "\n";
	}
}