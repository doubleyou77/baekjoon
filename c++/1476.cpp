#include <iostream>

using namespace std;

int main() {
	int E, S, M;
	cin >> E >> S >> M;

	for (int i = E % 15; i <= 7980; i += 15) {
		for (int j = S % 28; j <= 7980; j += 28) {
			for (int k = M % 19; k <= 7980; k += 19) {
				if (i == j && j == k && i != 0) {
					cout << i;
					break;
				}
			}
		}
	}
}