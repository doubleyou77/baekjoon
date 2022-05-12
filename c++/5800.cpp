#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int X;

	cin >> X;

	for(int x = 1; x <= X; x++) {
		int N;
		int arr[50];
		cin >> N;

		for (int i = 0; i < N; i++) {
			cin >> arr[i];
		}
		sort(arr, arr + N);
		cout << "Class " << x << "\n";
		cout << "Max " << arr[N-1] << ", ";
		cout << "Min " << arr[0] << ", ";
		int max = 0;
		for (int i = 0; i < N-1; i++) {
			if (arr[i + 1] - arr[i] > max)
				max = arr[i + 1] - arr[i];
		}
		cout << "Largest gap " << max;
		cout << "\n";
	}
}