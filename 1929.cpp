#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	int sq;

	for (int i = N; i <= M; i++) {
		sq = sqrt(i);
		if (sq == 1 && i != 1) {
			cout << i << "\n";
			continue;
		}

		if (i % 2) {
			for (int j = 2; j <= sq; j++) {

				if (!(i % j))
					break;

				if (j == sq)
					cout << i << "\n";
			}
		}
	}
}