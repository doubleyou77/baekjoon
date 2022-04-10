#include <iostream>
#include <string>

using namespace std;

long long L, M = 1234567891, check = 31, result = 0;
string alpha;

int main() {
	cin >> L;
	cin >> alpha;

	for (long long i = 0; i < L; i++) {
		char a = alpha[i];

		a -= ('a' - 1);

		long long c = 1;
		for (int j = 1; j <= i; j++) {
			c *= 31;

			if (c > M)
				c %= M;
		}
		result += (long long)a * c;

		if (result > M)
			result %= M;
	}
	cout << result;
	
}