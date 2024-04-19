#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void init(int** &a, int m, int n) {
    a = new int*[m];
    for (int i = 0; i < m; i++) {
        a[i] = new int[n];
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 10; // Khởi tạo ma trận a với số nguyên ngẫu nhiên từ 0 đến 9
        }
    }
}

void transposeMatrix(int** a, int m, int n, int** &b) {
    b = new int*[n];
    for (int i = 0; i < n; i++) {
        b[i] = new int[m];
        for (int j = 0; j < m; j++) {
            b[i][j] = a[j][i]; // Tạo ma trận chuyển vị của ma trận a và lưu vào ma trận b
        }
    }
}

void deleteMatrix(int** &d, int rows) {
    for (int i = 0; i < rows; i++) {
        delete[] d[i];
    }
    delete[] d;
}

void output(int** c, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int m, n;
    int** a;
    int** b;

    cout << "Nhập số hàng và số cột của ma trận: ";
    cin >> m >> n;

    if (m <= 0 || n <= 0) {
        cout << "Dữ liệu không hợp lệ!" << endl;
    } else {
        init(a, m, n);

        cout << "Ma trận ngẫu nhiên:" << endl;
        output(a, m, n);

        transposeMatrix(a, m, n, b);

        cout << "Ma trận chuyển vị:" << endl;
        output(b, n, m);

        deleteMatrix(a, m);
        deleteMatrix(b, n);
    }

    return 0;
}