#include <iostream>

using namespace std;

int main() {
	int L, result;
	cin >> L;

	result = L / 5;
	if (L % 5 == 0)
		cout << result;
	else
		cout << result + 1;
}