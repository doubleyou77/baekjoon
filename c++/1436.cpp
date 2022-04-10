#include <iostream>

using namespace std;

int countint(int n) {
    int count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}

int main() {
    int N, i = 0, number = 0;
    cin >> N;
    while (1) {
        int temp = i, size = countint(temp), check = 0;
        for (int j = 0; j < size; j++) {
            if (temp % 10 == 6) {
                check++;
            }
            else {
                check = 0;
            }
            if (check >= 3) {
                number++;
                break;
            }
            temp /= 10;
        }
        if (number == N) {
            cout << i;
            return 0;
        }
        i++;
    }
}
