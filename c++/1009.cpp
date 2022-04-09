#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int a, b;
		cin >> a >> b;
		int value = a;
		b = b % 4 + 4;
		
		for (int i = 2; i <= b; i++) {
			value = (value * a) % 10;
		}

		if (value == 0)
			value = 10;
		printf("%d\n", value);
	}
}