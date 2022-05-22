#include <iostream>
#include <algorithm>

using namespace std;

int arr[1000000];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;

	cin >> N;

	for(int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + N);

	for (int i = 0; i < N; i++) {
		if (arr[i] != arr[i + 1]);
		cout << arr[i] << "\n";
	}
}