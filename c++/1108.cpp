#include <iostream>

using namespace std;

int main() {
    long A, B, C;
    cin >> A >> B >> C;

    if (B > C)
        cout << "-1";
    else
        cout << A / (C - B) +1;

}
