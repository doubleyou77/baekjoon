#include <iostream>

using namespace std;

int main() {
	int C, N, p;
	int ave;
	int student[1001] = {0};
	double result;

	cin >> C;
	while (C--) {
		ave = 0;
		p = 0;
		cin >> N;
		for (int i = 0; i < N; i++) {
			cin >> student[i];
			ave += student[i];
		}
		ave /= N;

		for (int i = 0; i < N; i++) {
			if (student[i] > ave)
				p++;
		}
		result = (double)p / N * 100;
		cout << fixed;
		cout.precision(3);
		cout << result << "%\n";
	}

}