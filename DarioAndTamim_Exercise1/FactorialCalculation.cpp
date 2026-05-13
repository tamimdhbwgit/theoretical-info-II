#include <iostream>

using namespace std;

int main() {
    // get the number from stdin
    int x;
    cin >> x;

    // output int
    int result = 1;

    // loop and multiply the output for every number until x
    for (int i = 1; i <= x; i++) {
        result *= i;
    }

    cout << result;
}