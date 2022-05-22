#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector <pair<int, int>> v;

bool cmp(pair<int, int> a, pair<int, int> b) {
	return a.second > b.second;
}

int main() {

	for (int i = 0; i < 8; i++) {
		int n;
		cin >> n;
		v.push_back(make_pair(i + 1, n));
	}

	sort(v.begin(), v.end(), cmp);

	int result = 0, arr[5];
	for (int i = 0; i < 5; i++) {
		result += v[i].second;
		arr[i] = v[i].first;
	}
	sort(arr, arr + 5);

	cout << result << "\n";
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
}