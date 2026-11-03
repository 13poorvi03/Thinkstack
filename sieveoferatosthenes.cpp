#include <iostream>
#include <vector>
using namespace std;

int countPrime(int n) {
    vector<bool> isPrime(n, true);

    isPrime[0] = isPrime[1] = false;

    int count = 0;

    for (int i = 2; i < n; i++) {
        if (isPrime[i]) {
            count++;

            for (int j = i * 2; j < n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    return count;
}

int main() {
    int n = 50;

    cout << countPrime(n);

    return 0;
}