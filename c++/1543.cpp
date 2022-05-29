#include <iostream>
#include <string>

using namespace std;

int main() {
	string doc, find;

	getline(cin, doc);
	getline(cin, find);

	int result = 0;

	for (int i = 0; i < doc.length(); i++) {
		bool same = true;
		for (int j = 0; j < find.length(); j++) {
			if (find[j] != doc[i + j]) {
				same = false;
				break;
			}
		}
		if (same) {
			result++;
			i += find.length() - 1;
		}
	}

	cout << result;
}