#include <iostream>

using namespace std;

int main() {
	int A, B, result = 0, n = 1;

	cin >> A >> B;

	while (B > 0) {
		for (int i = 1; i <= B-n; i++) {
			result += i;
		}
		B -= n;
		n++;
		cout << result << " " << n << " " << B << "\n";
	}
	n = 1;
	
	cout << result;
}