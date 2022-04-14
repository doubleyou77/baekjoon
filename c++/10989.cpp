#include <iostream>

using namespace std;

int arr[10001];

int main() {
	int N, max = 0, n;

	cin >> N;
	for (int i = 0; i < N; i++) {

		ios::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);


		cin >> n;

		arr[n]++;

		if (max < n)
			max = n;
	}

	for (int i = 0; i <= max; i++) {
		if (arr[i]) {
			for (int j = 0; j < arr[i]; j++) {
				cout << i << "\n";
			}
		}
	}
}