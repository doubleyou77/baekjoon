#include <iostream>

using namespace std;


int main() {
	while (1) {
		int n, k;

		cin >> n >> k;

		if (cin.eof()) break;

		int coupon = n, stamp = 0, result = 0;
		while (coupon) {
			result += coupon;
			stamp += coupon;
			coupon = 0;
			coupon += stamp / k;
			stamp %= k;
		}
		cout << result << "\n";
	}
}