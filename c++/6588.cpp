#include <iostream>

using namespace std;

int prime[1000000];
bool check[1000001];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int pn = 0;

	for (int i = 2; i <= 1000000; i++) {
		if (check[i] == false) {
			prime[pn++] = i;
			for (int j = i + i; j <= 1000000; j += i) {
				check[j] = true;
			}
		}
	}

	
	int N;
	while (1) {
		cin >> N;
		int l = 1;

		if (N == 0) return 0;

		bool p = false;
		while (1) {
			if (check[N - prime[l]] == false) {
				cout << N << " = " << prime[l] << " + " << N - prime[l] << "\n";
				p = true;
				break;
			}
			l++;
		}
		if (!p) {
			cout << "Goldbach's conjecture is wrong.\n";
		}
	}
}