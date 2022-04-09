#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int m(string a, string b) {
	if (a.length() == b.length()) {
		return a < b;
	}
	else {
		return a.length() < b.length();
	}
}

string word[20000];

int main() {
	int N;
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		cin >> word[i];
	}

	sort(word, word + N, m);

	for (int i = 0; i < N; i++) {
		if (word[i] == word[i-1]) {
			continue;
		}
		cout << word[i] << "\n";
	}

}