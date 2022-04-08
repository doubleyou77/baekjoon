#include <iostream>
#include <string>
using namespace std;

int o[27] = {0, };
int main() {
	string word;
	int max = 0, s = 0;
	cin >> word;

	for (int i = 0; i < word.length(); i++) {
		if (word[i] >= 'A' && word[i] <= 'Z') {
			o[word[i] - 64]++;
		}
		if (word[i] >= 'a' && word[i] <= 'z') {
			o[word[i] - 96]++;
		}
	}
	int result;
	for (int i = 1; i <= 27; i++) {
		if (o[i] == max)
			s++;
		if (o[i] > max) {
			max = o[i];
			result = i;
			s = 0;
		}
	}
	if (s != 0) {
		cout << "?";
	}
	else {
		printf("%c", result + 64);
	}
}