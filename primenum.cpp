#include <iostream>
using namespace std;

string isPrime(int n) {

    if (n <= 1) return "Non Prime";

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return "Non Prime";
        }
    }

    return "Prime";
}

int main() {
    int n = 43;

    cout << isPrime(n) << endl;

    return 0;
}