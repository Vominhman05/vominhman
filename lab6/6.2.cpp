#include <stdio.h>

int vi_tri_cuoi_cung(char chuoi[], char ki_tu) {
    int vi_tri = -1; // Khởi tạo vị trí cuối cùng là -1

    for (int i = 0; chuoi[i] != '\0'; i++) {
        if (chuoi[i] == ki_tu) {
            vi_tri = i; // Lưu vị trí mới nếu tìm thấy ký tự
        }
    }

    return vi_tri;
}

int main() {
    char chuoi[] = "program";
    char ki_tu = 'r';

    int vi_tri = vi_tri_cuoi_cung(chuoi, ki_tu);

    printf("Vi tri cuoi cung cua ki tu '%c' trong chuoi la: %d\n", ki_tu, vi_tri);

    return 0;
}