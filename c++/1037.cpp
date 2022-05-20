#include <iostream>

using namespace std;

int main() {
	int T, max = 0, min = 1000000;

	cin >> T;

	while (T--) {
		int n;
		cin >> n;
		if (n > max)
			max = n;
		if (min > n)
			min = n;
	}
	cout << max * min;
}