#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cout << "Nhập hệ số a: ";
    std::cin >> a;
    std::cout << "Nhập hệ số b: ";
    std::cin >> b;
    std::cout << "Nhập hệ số c: ";
    std::cin >> c;

    double delta = b * b - 4 * a * c;

    if (delta > 0) {
        double x1 = (-b + std::sqrt(delta)) / (2 * a);
        double x2 = (-b - std::sqrt(delta)) / (2 * a);
        std::cout << "Phương trình có hai nghiệm phân biệt:\n";
        std::cout << "x1 = " << x1 << "\n";
        std::cout << "x2 = " << x2 << "\n";
    } else if (delta == 0) {
        double x = -b / (2 * a);
        std::cout << "Phương trình có nghiệm kép:\n";
        std::cout << "x = " << x << "\n";
    } else {
        std::cout << "Phương trình vô nghiệm.\n";
    }

    return 0;
}
