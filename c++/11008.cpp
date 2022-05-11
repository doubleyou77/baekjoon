#include <iostream>

using namespace std;

int main() {
	int T;

	cin >> T;

	while (T--) {
		string s, p;
		cin >> s >> p;

		int sSize = s.length();
		int pSize = p.length();
		int time = 0;
		for (int i = 0; i < sSize; i++) {
			if (s[i] == p[0]) {
				int check = 0;
				for (int j = 0; j < pSize; j++) {
					if (s[i + j] == p[j]) {
						check++;
					}
				}
				if (check == pSize) {
					i += pSize-1;
					time++;
				}
				else {
					time++;
				}
			}
			else {
				time++;
			}
		}
		cout << time << "\n";
	}
}