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

	int T;
	cin >> T;

	int N;
	while (T--) {
		cin >> N;
		int result = 0;
	
		for (int i = 0; i < sizeof(prime) / sizeof(int); i++) {
			/*if (prime[i] > N) break;*/
			if (N - prime[i] >= 2 && prime[i] <= N - prime[i]) {
				if (check[N - prime[i]] == false) result++;
			}
			else break;
		}
		cout << result << "\n";
	}
}