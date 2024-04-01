#include <iostream>
using namespace std;

// Hàm kiểm tra số nguyên tố
bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Nhập số nguyên dương n: ";
    cin >> n;

    if (isPrime(n)) {
        cout << n << " là số nguyên tố!" << endl;
    } else {
        cout << n << " không là số nguyên tố!" << endl;
    }

    return 0;
}
