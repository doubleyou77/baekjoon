#include <iostream>

using namespace std;

int main() {
	int T;
	int arr[15][15];
	cin >> T;


	for (int i = 1; i <= 14; i++) {
		arr[0][i] = i;
	}

	for (int i = 1; i <= 14; i++) {
		for (int j = 1; j <= 14; j++) {
			arr[i][j] = 0;
			for (int k = 1; k <= j; k++) {
				arr[i][j] += arr[i - 1][k];
			}
		}
	}

	while (T--) {
		int k, n;
		cin >> k >> n;

		cout << arr[k][n] << "\n";
	}

	
}