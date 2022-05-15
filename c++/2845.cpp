#include <iostream>

using namespace std;

int main() {
	int L, P;

	cin >> L >> P;

	int n;
	for (int i = 0; i < 5; i++) {
		cin >> n;
		cout << n - L * P << " ";
	}
}