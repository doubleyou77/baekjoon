#include <iostream>

using namespace std;

int main() {
	int A, B, C, D, E;

	cin >> A;
	cin >> B;
	cin >> C;
	cin >> D;
	cin >> E;

	int result = 0;
	if (A < 0) {
		result += (-1*A)*C + D + (B*E);
	}
	else {
		result += (B-A) * E;
	}

	cout << result;
}