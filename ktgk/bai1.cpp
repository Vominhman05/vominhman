#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// Hàm so sánh tùy chỉnh để sắp xếp MSSV
bool customSort(const std::string& mssv1, const std::string& mssv2) {
    // So sánh phần số của MSSV
    std::string numPart1 = mssv1.substr(0, 4); // Phần số là 4 ký tự đầu tiên
    std::string numPart2 = mssv2.substr(0, 4);

    if (numPart1 != numPart2) {
        return numPart1 < numPart2; // Sắp xếp từ thấp đến cao
    } else {
        // Nếu phần số giống nhau, sắp xếp theo phần đuôi
        std::string tailPart1 = mssv1.substr(4); // Phần đuôi là từ ký tự thứ 5 trở đi
        std::string tailPart2 = mssv2.substr(4);

        return tailPart1 < tailPart2;
    }
}

int main() {
    // Khai báo và khởi tạo mảng chứa chuỗi MSSV
    std::vector<std::string> mssvArray = { "", "2301CT1234", "2302CT3456", "2305CT3999", "2304CT0002" };

    // Yêu cầu người dùng nhập MSSV của mình
    std::string userMSSV;
    std::cout << "Nhập MSSV của bạn: ";
    std::cin >> userMSSV;

    // Cập nhật phần tử đầu tiên của mảng với MSSV của người dùng
    mssvArray[0] = userMSSV;

    // Tạo một bản sao của mảng để sắp xếp
    std::vector<std::string> sortedMssvArray = mssvArray;

    // Sắp xếp mảng theo yêu cầu
    std::sort(sortedMssvArray.begin(), sortedMssvArray.end(), customSort);

    // In ra mảng ban đầu
    std::cout << "\nMSSV Array ban đầu:" << std::endl;
    for (const auto& mssv : mssvArray) {
        std::cout << mssv << std::endl;
    }

    // In ra mảng đã sắp xếp
    std::cout << "\nMSSV Array đã sắp xếp:" << std::endl;
    for (const auto& mssv : sortedMssvArray) {
        std::cout << mssv << std::endl;
    }

    // Tìm phần tử có giá trị lớn nhất trong mảng đã sắp xếp
    std::string maxMSSV = sortedMssvArray.back();
    std::cout << "\nPhần tử chứa MSSV lớn nhất: " << maxMSSV << std::endl;

    return 0;
}
