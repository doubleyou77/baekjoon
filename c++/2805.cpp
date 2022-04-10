#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	long long N, M, result = 0;
	vector<long> a;

	cin >> N >> M;


	for (int i = 0; i < N; i++) {
		long long n;
		cin >> n;
		a.push_back(n);
	}

	sort(a.begin(), a.end());

	long long lo = 0, hi = a.back();

	while (lo <= hi) {
		long long mid = (lo + hi) / 2;
		long long total = 0;
		for (int i = 0; i < N; i++) {
			if (mid < a[i])
				total += a[i] - mid;
		}
		if (total >= M) {
			if (result < mid) {
				result = mid;
			}
			lo = mid + 1;
		}
		else {
			hi = mid - 1;
		}
	}
	cout << result;
}