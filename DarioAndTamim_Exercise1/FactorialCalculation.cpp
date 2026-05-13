#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;

    // for negative numbers handling
    if (x < 0) {
        cout << "Error: Factorial not defined for negative numbers" << endl;
        return 1;
    }
    //Q: Why unsigned long long? Ans: because factorials of 13 exceed standard integer limits.
    unsigned long long result = 1;

    // fact calculation:
    for (int i = 1; i <= x; i++) {
        result *= i;
    }

    cout << result << endl;
    return 0;
}