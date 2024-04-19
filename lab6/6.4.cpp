#include <stdio.h>
#include <string.h>

void xoa_khoang_trang(char chuoi[]) {
    int i = 0, j = 0;
    
    // Xóa khoảng trắng ở đầu chuỗi
    while (chuoi[i] == ' ') {
        i++;
    }

    // Dịch chuỗi về phía trước để loại bỏ khoảng trắng ở đầu
    if (i > 0) {
        while (chuoi[i] != '\0') {
            chuoi[j] = chuoi[i];
            i++;
            j++;
        }
        chuoi[j] = '\0';
    }

    // Xóa khoảng trắng ở cuối chuỗi
    i = strlen(chuoi) - 1;
    while (chuoi[i] == ' ') {
        chuoi[i] = '\0';
        i--;
    }
}

int main() {
    char chuoi[] = "   Hello, World!    ";

    printf("Chuoi truoc khi xoa khoang trang: '%s'\n", chuoi);

    xoa_khoang_trang(chuoi);

    printf("Chuoi sau khi xoa khoang trang: '%s'\n", chuoi);

    return 0;
}