#include <iostream>
#include <algorithm>

using namespace std;

int arr[10000];

int main() {
	int M, N;

	cin >> M;
	cin >> N;

	int min = 10000, sum = 0;
	for (int i = M; i <= N; i++) {
		int count = 0;
		for (int j = 2; j <= i; j++) {
			if (i % j == 0) count++;
		}
		if (count == 1) {
			if (i < min) min = i;
			sum += i;
		}
	}
	if (sum == 0) {
		cout << "-1";
		return 0;
	}
	cout << sum << "\n" << min;
}