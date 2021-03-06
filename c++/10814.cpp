#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, string> v1, pair<int, string> v2) {
	return v1.first < v2.first;
}


int main() {
	int N, count = 0;

	cin >> N;

	vector<pair<int, string>> v(N);

	for (int i = 0; i < N; i++) {
		cin >> v[i].first >> v[i].second;
	}

	stable_sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < N; i++) {
		cout << v[i].first << " " << v[i].second << "\n";
	}
}