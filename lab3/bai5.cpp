#include <iostream>
using namespace std;

// Hàm tính ước chung lớn nhất (UCLN)
int UCLN(int a, int b) {
    if (b == 0) {
        return a;
    }
    return UCLN(b, a % b);
}

// Hàm kiểm tra số nguyên tố cùng nhau
bool areCoprime(int m, int n) {
    return UCLN(m, n) == 1;
}

int main() {
    int m, n;
    cout << "Nhập số nguyên dương m: ";
    cin >> m;
    cout << "Nhập số nguyên dương n: ";
    cin >> n;

    if (areCoprime(m, n)) {
        cout << m << " và " << n << " là hai số nguyên tố cùng nhau." << endl;
    } else {
        cout << m << " và " << n << " không là hai số nguyên tố cùng nhau." << endl;
    }

    return 0;
}
