#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhập số phần tử của mảng: ";
    cin >> n;

    int *source = new int[n];
    int *destination = new int[n];
    int count = 0;

    cout << "Nhập các phần tử của mảng nguồn: ";
    for (int i = 0; i < n; i++) {
        cin >> *(source + i);
        if (*(source + i) % 2 == 0) {
            *(destination + count) = *(source + i);
            count++;
        }
    }

    cout << "Mảng nguồn:" << endl;
    for (int i = 0; i < n; i++) {
        cout << *(source + i) << " ";
    }
    cout << endl;

    cout << "Mảng đích sau khi được sao chép dữ liệu:" << endl;
    for (int i = 0; i < count; i++) {
        cout << *(destination + i) << " ";
    }
    cout << endl;

    delete[] source;
    delete[] destination;

    return 0;
}