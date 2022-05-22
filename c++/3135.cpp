#include <iostream>

using namespace std;

int main() {
	int A, B, N;

	cin >> A >> B;
	cin >> N;

	int arr[5];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	
	int min = B - A;
	if (min < 0) min *= -1;

	for (int i = 0; i < N; i++) {
		int check = B - arr[i];

		if (check < 0) {
			check *= -1;
		}
		check++;
		if (check < min) min = check;
	}

	
	cout << min;
}