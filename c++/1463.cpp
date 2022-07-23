#include <iostream>

using namespace std;

int d[1000000];

int func(int n) {
	if (n == 1) return 0;
	if (d[n] > 0) return d[n];
	d[n] = func(n - 1) + 1;
	if (n % 2 == 0) {
		int temp = func(n / 2) + 1;
		if (d[n] > temp)d[n] = temp;
	}
	if (n % 3 == 0) {
		int temp = func(n / 3) + 1;
		if (d[n] > temp) d[n] = temp;
	}
	return d[n];
}

int main() {
	long long n;
	cin >> n;

	cout << func(n);

}