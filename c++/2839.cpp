#include <iostream>

using namespace std;

int main() {
	int N, count = 0, min = 5000;
	cin >> N;

	for (int i = 0; i <= N; i+=5) {
		count = 0;
		if ((N - i) % 3 == 0) {
			count = i/5 + (N - i) / 3;
			if (count < min)
				min = count;
		}
	}
	if (min == 5000)
		cout << "-1";
	else
		cout << min;
}