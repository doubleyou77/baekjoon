#include <iostream>

using namespace std;

int main() {
	int T;
	char p[100000], n[200000];

	cin >> T;
	while (T--) {
		cin >> p;
		cin >> n;
		for (int i = 1; i < (int)n; i += 2) {
			cout << i;
		}
	}
}