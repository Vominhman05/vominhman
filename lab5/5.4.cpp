#include <iostream>
using namespace std;

bool isPrime(int num, int i = 2) {
    if (num <= 2) {
        return (num == 2);
    }
    if (num % i == 0) {
        return false;
    }
    if (i * i > num) {
        return true;
    }
    return isPrime(num, i + 1);
}

int sumPrimes(int n) {
    if (n <= 2) {
        return 0;
    }
    if (isPrime(n)) {
        return sumPrimes(n - 1) + n;
    } else {
        return sumPrimes(n - 1);
    }
}

int main() {
    int n;
    cout << "Nhập số nguyên n: ";
    cin >> n;

    int sum = sumPrimes(n);

    cout << "Tổng các số nguyên tố từ 2 đến " << n << " là: " << sum << endl;

    return 0;
}