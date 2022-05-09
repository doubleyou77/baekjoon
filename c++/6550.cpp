#include <iostream>
#include <string>

using namespace std;

int main() {
	string in, out;
	while (cin >> in >> out) {
		int j = 0;
		for (int i = 0; i < out.length(); i++) {
			if(out[i] == in[j])
				j++;
		}
		if (j == in.length())
			cout << "Yes" << "\n";
		else
			cout << "No" << "\n";

	}
}