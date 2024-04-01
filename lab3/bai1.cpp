#include <iostream>
using namespace std;

// Hàm tính luỹ thừa a^n
long long tinhLuyThua(int a, int n) {
    long long ketQua = 1;
    for (int i = 1; i <= n; ++i) {
        ketQua *= a;
    }
    return ketQua;
}

int main() {
    int a, n;
    cout << "Nhập giá trị của a: ";
    cin >> a;
    cout << "Nhập giá trị của n: ";
    cin >> n;

    // Kiểm tra nếu n âm hoặc a bằng 0
    if (n < 0 || (n == 0 && a != 0)) {
        cout << "Không hợp lệ! Vui lòng nhập số nguyên dương cho n." << endl;
    } else {
        long long ketQua = tinhLuyThua(a, n);
        cout << "Kết quả của " << a << "^" << n << " là: " << ketQua << endl;
    }

    return 0;
}

