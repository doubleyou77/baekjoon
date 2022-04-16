#include <iostream>

using namespace std;

int main() {
	int N;
	int arr[50][50];
	int result[50];

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i][0] >> arr[i][1];
	}

	int count;
	for (int i = 0; i < N; i++) {
		count = 1;
		for (int j = 0; j < N; j++) {
			if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1])
				count++;
		}
		result[i] = count;
	}

	for (int i = 0; i < N; i++) {
		cout << result[i] << " ";
	}
}