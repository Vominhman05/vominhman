#include <iostream>
#include <vector>

std::vector<std::vector<int>> nhanmatran(std::vector<std::vector<int>> matran1, std::vector<std::vector<int>> matran2) {
    int row1 = matran1.size();
    int col1 = matran1[0].size();
    int col2 = matran2[0].size();
    std::vector<std::vector<int>> result(row1, std::vector<int>(col2, 0));

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            for (int k = 0; k < col1; k++) {
                result[i][j] += matran1[i][k] * matran2[k][j];
            }
        }
    }

    return result;
}

int main() {
    std::vector<std::vector<int>> matran1 = {{1, 2}, {3, 4}};
    std::vector<std::vector<int>> matran2 = {{5, 6}, {7, 8}};

    std::vector<std::vector<int>> ketqua = nhanmatran(matran1, matran2);

    std::cout << "Ma trận 1:" << std::endl;
    for (const auto& row : matran1) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Ma trận 2:" << std::endl;
    for (const auto& row : matran2) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Kết quả nhân hai ma trận:" << std::endl;
    for (const auto& row : ketqua) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}