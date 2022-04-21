#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<string> ll;
vector<string> who;

int main() {
	int N, M, count = 0;
	char s[1][20];

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> s[0];
		ll.push_back(s[0]);
	}

	for (int i = 0; i < M;i++) {
		cin >> s[0];
		ll.push_back(s[0]);
	}

	sort(ll.begin(), ll.end());

	for (int i = 0; i < M + N; i++) {
		if (ll[i] == ll[i + 1]) {
			who.push_back(ll[i]);
			count++;
			i++;
		}
	}

	cout << count << "\n";

	for (int i = 0; i < who.size(); i++) {
		cout << who.at(i) << "\n";
	}
}
	