#include <iostream>

using namespace std;

int main() {
	int n, m;
	int num = 1;

	cin >> n >> m;

	for (int i = m; i <= n; i++) {
		num += i;
	}

	cout << n << m;
	cout << num << " df";
}