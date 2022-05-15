#include <iostream>

using namespace std;

int main() {
	int n1, n2, n3;

	cin >> n1 >> n2 >> n3;

	if (n1 == n2 && n2 == n3) {
		cout << 10000 + n1 * 1000;
	}
	else if (n1 == n2 || n2 == n3 || n1 == n3) {
		int s = n1 == n2 ? n1 : n3;
		cout << 1000 + s * 100;
	}
	else {
		int max = n1 > n2 ? n1 : n2;
		max = max > n3 ? max : n3;
		cout << max * 100;
	}
}