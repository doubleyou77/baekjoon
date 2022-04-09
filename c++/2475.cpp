#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int s[5], result = 0;
	for (int i = 0; i < 5; i++) {
		cin >> s[i];
		result += pow(s[i], 2);
	}
	cout << result % 10;
}