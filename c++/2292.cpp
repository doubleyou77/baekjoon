#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int N, f = 1, count = 1;

	cin >> N;

	for (int i = 0; i < 1000000; i++) {
		int j = 0;
		do {
			if (f == N) {
				cout << count;
				return 0;
			}
			f++;
			j++;
		} while (j < i * 6);
		count++;

	}
}