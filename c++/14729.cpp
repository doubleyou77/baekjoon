#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector <double> v;

int main() {
	int N;

	cin >> N;

	for (int i = 0; i < N; i++) {
		double n;
		cin >> n;
		v.push_back(n);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < 7; i++) {
		printf("%.3f\n", v[i]);
	}
}