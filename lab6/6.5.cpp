#include <iostream>
#include <string>

std::string logic_AND(const std::string& a, const std::string& b) {
    std::string result = "";
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == '1' && b[i] == '1') {
            result += '1';
        } else {
            result += '0';
        }
    }
    return result;
}

std::string logic_OR(const std::string& a, const std::string& b) {
    std::string result = "";
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == '1' || b[i] == '1') {
            result += '1';
        } else {
            result += '0';
        }
    }
    return result;
}

std::string logic_XOR(const std::string& a, const std::string& b) {
    std::string result = "";
    for (int i = 0; i < a.length(); i++) {
        if ((a[i] == '1' && b[i] == '0') || (a[i] == '0' && b[i] == '1')) {
            result += '1';
        } else {
            result += '0';
        }
    }
    return result;
}

int main() {
    std::string a, b;

    std::cout << "Nhap chuoi a: ";
    std::cin >> a;
    std::cout << "Nhap chuoi b: ";
    std::cin >> b;

    if (a.length() != b.length()) {
        std::cout << "Hai chuoi phai co cung do dai." << std::endl;
    } else {
        std::string result_AND = logic_AND(a, b);
        std::string result_OR = logic_OR(a, b);
        std::string result_XOR = logic_XOR(a, b);

        std::cout << "a AND b = " << result_AND << std::endl;
        std::cout << "a OR b = " << result_OR << std::endl;
        std::cout << "a XOR b = " << result_XOR << std::endl;
    }

    return 0;
}