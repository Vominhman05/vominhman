#include <stdio.h>

// Cấu trúc Ngay chứa ngày, tháng, năm
struct Ngay {
    int ngay;
    int thang;
    int nam;
};

// Cấu trúc Thoitiet chứa cấu trúc Ngay, nhiệt độ cao nhất, nhiệt độ thấp nhất, tốc độ gió lớn nhất
struct Thoitiet {
    struct Ngay ngay;
    int nhiet_do_cao_nhat;
    int nhiet_do_thap_nhat;
    int toc_do_gio_lon_nhat;
};

// Tìm ngày có nhiệt độ cao nhất trong tháng 9/2012
struct Ngay nhiet_do_thap_nhat(struct Thoitiet arr_thoi_tiet[], int size) {
    struct Ngay ngay_nhiet_do_thap_nhat = {0, 0, 0};
    int min_nhiet_do = 100; // Giả sử nhiệt độ tối đa là 100 độ C

    for (int i = 0; i < size; i++) {
        if (arr_thoi_tiet[i].ngay.thang == 9 && arr_thoi_tiet[i].ngay.nam == 2012) {
            if (arr_thoi_tiet[i].nhiet_do_thap_nhat < min_nhiet_do) {
                min_nhiet_do = arr_thoi_tiet[i].nhiet_do_thap_nhat;
                ngay_nhiet_do_thap_nhat = arr_thoi_tiet[i].ngay;
            }
        }
    }

    return ngay_nhiet_do_thap_nhat;
}

int main() {
    // Khởi tạo mảng các cấu trúc Thoitiet
    struct Thoitiet arr_thoi_tiet[] = {
        {{1, 9, 2012}, 30, 25, 10},
        {{5, 9, 2012}, 32, 26, 12},
        {{10, 9, 2012}, 28, 22, 8},
        {{15, 9, 2012}, 29, 23, 9}
        // Thêm thông tin thời tiết cho các ngày khác trong năm 2012
    };

    int size = sizeof(arr_thoi_tiet) / sizeof(arr_thoi_tiet[0]);

    // Tìm ngày có nhiệt độ thấp nhất trong tháng 9/2012
    struct Ngay ngay_nhiet_do_thap_nhat = nhiet_do_thap_nhat(arr_thoi_tiet, size);

    printf("Ngay co nhiet do thap nhat trong thang 9/2012 la: %d/%d/%d\n", ngay_nhiet_do_thap_nhat.ngay, ngay_nhiet_do_thap_nhat.thang, ngay_nhiet_do_thap_nhat.nam);

    return 0;
}