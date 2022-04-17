#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int arr[500001];
int arr2[8001];

int main() {
	int N, more, max = 0;
	int result = 0;

	cin >> N;

	for(int i = 0; i < N; i++) {
		int n;
		cin >> n;
		arr[i] = n;
		result += arr[i];
		arr2[n+4000]++;
	}

	for (int i = 0; i < 8001; i++) {
		if (arr2[i] > max) {
			max = arr2[i];
			more = i;
		}
	}
	for (int i = more + 1; i < 8001; i++) {
		if (arr2[i] == max) {
			more = i;
			break;
		}
	}

	sort(arr, arr + N);

	if (round((double)result / N) == -0)
		printf("0\n");
	else 
	printf("%.0lf\n", round((double)result / N));
	printf("%d\n", arr[N / 2]);
	printf("%d\n", more-4000);
	printf("%d\n", arr[N - 1] - arr[0]);
}