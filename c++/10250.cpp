#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int T;

	cin >> T;

	while (T--) {
		int H, W, N, F, R;
		cin >> H >> W >> N;

		F = N % H;

		if (F == 0) {
			F = H;
		}
		R = ceil((float)N / H);

		cout << 100 * F + R << "\n";

	}
	
}