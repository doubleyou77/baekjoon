#include <iostream>

using namespace std;

long long v[10001];

int main() {
	long long K, N, result = 0, max = 0;
	cin >> K >> N;

	for (int i = 0; i < K; i++) {
		cin >> v[i];
		if (max < v[i])
			max = v[i];
	}

	
	long long lo = 0, hi = max;

	while (lo <= hi) {
		long long mid = (lo + hi) / 2;
		if (mid == 0)
			mid = 1;
		long long total = 0;
		for (int i = 0; i < K; i++) {
			total += v[i] / mid;
		}
		if (total >= N) {
			lo = mid + 1;
			if (result < mid)
				result = mid;
		}
		else {
			hi = mid - 1;
		}
	}
	cout << result;
}