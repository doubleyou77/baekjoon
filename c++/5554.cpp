#include <iostream>

using namespace std;

int main() {
	int n, sum = 0;
	while (1) {
		cin >> n;
		if (cin.eof()) break;

		sum += n;
	}
	cout << sum / 60 << "\n" << sum % 60;
}