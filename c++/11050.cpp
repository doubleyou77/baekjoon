#include <iostream>

using namespace std;

int main() {
	int N, K, result = 1, result2 = 1;

	cin >> N >> K;

	for (int i = N; i >= N - K + 1; i--) {
		result *= i;
	}
	for (int i = 1; i <= K; i++) {
		result2 *= i;
	}
	cout << result / result2;
}