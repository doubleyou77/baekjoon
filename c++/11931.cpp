#include <iostream>
#include <algorithm>

using namespace std;

long arr[1000000];

int main() {
	int N;


	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + N, greater<>());

	for (int i = 0; i < N; i++) {
		cout << arr[i] << "\n";
	}
}