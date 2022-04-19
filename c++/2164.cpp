#include <iostream>

using namespace std;

int arr[1000001];

int main() {
	int N, count = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		arr[i] = i + 1;
	}

	for (int i = 0; i < N * 2; i++) {
		if (i % 2 == 0 && arr[i + 1] != 0) {
			arr[i] = 0;
		}
		else if (i % 2 == 1 && arr[i + 1] != 0) {
			arr[N+count] = arr[i];
			arr[i] = 0;
			count++;
		}
	}

	for (int i = 0; i < N * 2;i++) {
		if(arr[i])
			cout << arr[i];
	}
}