#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int D, H, W;

	cin >> D >> H >> W;

	double R, h, w;
	R = sqrt(H * H + W * W);
	h = H * D / R;
	w = W * D / R;
	cout << (int)h << " " << (int)w;
}