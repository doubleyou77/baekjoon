#include <iostream>

using namespace std;

int main() {
	int A, B, C, D;

	cin >> A >> B >> C;
	cin >> D;

	int h, m, s;
	h = D / 3600;
	m = D%3600 / 60;
	s = D % 60;

	A += h;
	B += m;
	C += s;

	if (C >= 60) {
		B+=C/60;
		C %= 60;
	}
	if (B >= 60) {
		A += B/60;
		B %= 60;
	}
	if (A >= 24) {
		A %= 24;
	}
	cout << A << " " << B << " " << C;
}