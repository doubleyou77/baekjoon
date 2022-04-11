#include <iostream>

using namespace std;

int main() {
	int N, M, temp;
	cin >> N >> M;
	
	int n = N, m = M;

	if (m < n) {
		temp = n;
		n = m;
		m = temp;
	}
	while (m % n != 0) {
		temp = m;
		m = n;
		n = temp % n;
		if (m < n) {
			temp = n;
			n = m;
			m = temp;
		}
	}
	
	cout << n << "\n" << n*(N/n)*(M/n);
}