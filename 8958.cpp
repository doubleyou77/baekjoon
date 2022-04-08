#include <iostream>
#include <string>

using namespace std;

int main() {
	int N, s, result;
	cin >> N;

	while (N--) {
		result = 0, s = 1;
		string c;
		cin >> c;
		for (int i = 0; i < c.length(); i++) {
			if (c[i] == 'O') {
				result += s;
				s++;
			}
			else if (c[i] == 'X')
				s = 1;
		}
		cout << result << "\n";
	}
}