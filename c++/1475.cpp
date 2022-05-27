#include <iostream>

using namespace std;

int main() {
	int N;

	cin >> N;

	int arr[10] = { 0 };
	while (N >= 1) {
		if (N % 10 == 6 || N % 10 == 9) {
			if (arr[6] == arr[9])
				arr[N % 10]++;
			else if (arr[6] > arr[9])
				arr[9]++;
			else if (arr[9] > arr[6])
				arr[6]++;
		}
		else 
			arr[N % 10]++;
		N /= 10;
	}

	int max = 0;
	for (int i = 0; i < 10; i++) {
		if (arr[i] > max)
			max = arr[i];
	}

	cout << max;
}