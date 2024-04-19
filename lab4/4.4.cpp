#include <stdio.h>

char tim_ky_tu(char* chuoi, int i) {
    if (i <= 0) {
        return '!';
    }

    int count[256] = {0}; // Mảng đếm số lần xuất hiện của các ký tự ASCII

    // Đếm số lần xuất hiện của từng ký tự trong chuỗi
    for (int j = 0; chuoi[j] != '\0'; j++) {
        count[(int)chuoi[j]]++;
    }

    // Tìm ký tự xuất hiện i lần và trả về
    for (int j = 0; chuoi[j] != '\0'; j++) {
        if (count[(int)chuoi[j]] == i) {
            return chuoi[j];
        }
    }

    return '!';
}

int main() {
    char chuoi[] = "hello";
    int i = 2;

    char ketqua = tim_ky_tu(chuoi, i);

    if (ketqua == '!') {
        printf("Khong tim thay ky tu xuat hien %d lan trong chuoi\n", i);
    } else {
        printf("Ky tu xuat hien %d lan trong chuoi la: %c\n", i, ketqua);
    }

    return 0;
}