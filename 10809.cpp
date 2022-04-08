#include <iostream>
#include <string>

using namespace std;

int main() {
	int a[26] = {0, };
	string word;

	cin >> word;
	for (int i = 0; i < 26; i++) {
		a[i] = -1;
	}
	for (int i = 0; i < word.length(); i++) {
		if (a[word[i] - 97] == -1)
			a[word[i] - 97] = i;
	}
	for (int i = 0; i < 26; i++) {
		cout << a[i] << " ";
	}
}