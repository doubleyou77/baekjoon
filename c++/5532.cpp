#include <iostream>

using namespace std;

int main() {
	int L, A, B, C, D;

	cin >> L;
	cin >> A;
	cin >> B;
	cin >> C;
	cin >> D;

	int c1, c2;

	c1 = ceil((double)A / C);
	c2 = ceil((double)B / D);

	int result = c1 > c2 ? c1 : c2;
	result = L - result;

	cout << result;
}