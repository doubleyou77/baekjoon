#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	int N;

	cin >> N;

	while (N--) {
		double n;
		cin >> n;

		printf("$%.2f\n", n*0.8);
	}
}