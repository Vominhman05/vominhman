#include <stdio.h>

int so_sanh_chuoi(char chuoi1[], char chuoi2[]) {
    int i = 0;

    while (chuoi1[i] != '\0' || chuoi2[i] != '\0') {
        if (chuoi1[i] != chuoi2[i]) {
            if (chuoi1[i] < chuoi2[i]) {
                return -1;
            } else {
                return 1;
            }
        }
        i++;
    }

    if (chuoi1[i] == '\0' && chuoi2[i] == '\0') {
        return 0;
    } else if (chuoi1[i] == '\0') {
        return -1;
    } else {
        return 1;
    }
}

int main() {
    char chuoi1[] = "Hello";
    char chuoi2[] = "hello";

    int ket_qua = so_sanh_chuoi(chuoi1, chuoi2);

    if (ket_qua == -1) {
        printf("Chuoi 1 < Chuoi 2\n");
    } else if (ket_qua == 0) {
        printf("Chuoi 1 = Chuoi 2\n");
    } else {
        printf("Chuoi 1 > Chuoi 2\n");
    }

    return 0;
}