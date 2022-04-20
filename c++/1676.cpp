#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	int f = 0;

	for (int i = 0;i <= N;i++) {
		if (i != 0) {
			if (i % 125 == 0) {
				f += 3;
			}
			else if (i % 25 == 0) {
				f += 2;
			}
			else if (i % 5 == 0) {
				f++;
			}
		}
	}
	cout << f;
}