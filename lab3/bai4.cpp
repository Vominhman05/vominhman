#include <iostream>
using namespace std;

int main() {
    double number, smallest = 0;
    int count = 0;

    cout << "Nhập số thực (nhập 0 để kết thúc): ";
    cin >> number;

    while (number != 0) {
        count++; // Tăng số lượng số thực đã nhập

        if (count == 1 || number < smallest) {
            smallest = number; // Cập nhật số thực nhỏ nhất
        }

        cout << "Nhập số thực (nhập 0 để kết thúc): ";
        cin >> number;
    }

    cout << "Số lượng số thực đã nhập: " << count << endl;
    cout << "Số thực nhỏ nhất: " << smallest << endl;

    return 0;
}
