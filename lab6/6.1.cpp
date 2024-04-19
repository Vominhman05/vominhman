#include <stdio.h>

void noi_chuoi(char chuoi_ban_dau[], char chuoi_chi_dinh[]) {
    int i = 0, j = 0;

    // Tìm vị trí kết thúc của chuỗi ban đầu
    while (chuoi_ban_dau[i] != '\0') {
        i++;
    }

    // Nối chuỗi chỉ định vào cuối chuỗi ban đầu
    while (chuoi_chi_dinh[j] != '\0') {
        chuoi_ban_dau[i] = chuoi_chi_dinh[j];
        i++;
        j++;
    }

    // Đánh dấu kết thúc chuỗi mới
    chuoi_ban_dau[i] = '\0';
}

int main() {
    char chuoi_ban_dau[100] = "pro";
    char chuoi_chi_dinh[] = "gram";

    noi_chuoi(chuoi_ban_dau, chuoi_chi_dinh);

    printf("Chuoi sau khi noi: %s\n", chuoi_ban_dau);

    return 0;
}