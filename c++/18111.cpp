#include <iostream>

using namespace std;


int main() {
	int N, M, B;
	int a[500][500];
	cin >> N >> M >> B;


	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> a[i][j];
		}
	}

	int LT = 0x7f7f7f7f;
	int MH;
	for (int h = 0; h <= 256; h++) {
		int b = 0, r = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				int height = a[i][j] - h;
				if (height > 0) {
					r += height;
				}
				else if (height < 0) {
					b -= height;
				}
			}
		}

		if (r + B >= b) {
			int time = r * 2 + b;
			if (LT >= time) {
				LT = time;
				MH = h;
			}
		}
	}
	cout << LT << " " << MH << "\n";
}