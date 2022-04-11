#include <iostream>

using namespace std;

int main() {
	int N, arr[200][2];

	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 2; j++) {
			cout << arr[i][j];
		}
		cout << "\n";
	}
}