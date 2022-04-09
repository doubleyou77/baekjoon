#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	vector<int> v;
	vector<int> asc;
	vector<int> desc;

	for (int i = 0; i < 8; i++) {
		int n;
		cin >> n;
		v.push_back(n);
		asc.push_back(n);
		desc.push_back(n);
	}

	sort(asc.begin(), asc.end());
	sort(desc.begin(), desc.end(), greater<>());

	if (v == asc)
		cout << "ascending";
	else if (v == desc)
		cout << "descending";
	else
		cout << "mixed";
}