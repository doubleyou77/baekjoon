#include <iostream>

using namespace std;

int alphabet[27];

int main() {
	char c;

	while ((c = getchar()) != EOF) {
		if (c >= 'a' && c <= 'z') {
			alphabet[c - 'a'+1]++;
		}
	}
	int max = 0;
	for (int i = 1; i <= 26; i++) {
		if (alphabet[i] > max) {
			max = alphabet[i];
		}
	}

	for (int i = 1; i <= 26; i++) {
		if (alphabet[i] == max) {
			printf("%c", 'a' + i - 1);
		}
	}
}