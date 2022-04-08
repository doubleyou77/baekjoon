#include <iostream>

using namespace std;

int main() {
	int A, B, N, value = 0;
	cin >> A >> B >> N;

	if (A % B == 0) {
		cout << value;
		return 0;
	}
	
	A %= B;

	for (int i = 0; i < N; i++) {
		A *= 10;
		value = (int)A / B;
		A %= B;
	}
	cout << value;
	return 0;
}