#include <iostream>

using namespace std;

int main() {
	int N, M;
	while (cin >> N >> M) {

		int count = M - N + 1;

		for (int i = N; i <= M; i++) {
			int arr[10] = { 0 };
			int n = i;
			while (n != 0) {
				arr[n % 10]++;
				n /= 10;
			}
			for (int j = 0; j < 10; j++) {
				if (arr[j] > 1) {
					count--;
					break;
				}
			}
		}
		cout << count << "\n";
	}
}