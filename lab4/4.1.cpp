#include <iostream>
#include <vector>

std::vector<std::vector<int>> chuyen_vi(std::vector<std::vector<int>> matran) {
    int row = matran.size();
    int col = matran[0].size();
    std::vector<std::vector<int>> result(col, std::vector<int>(row));

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[j][i] = matran[i][j];
        }
    }

    return result;
}

int main() {
    std::vector<std::vector<int>> matran = {{1, 2, 3}, {4, 5, 6}};

    std::vector<std::vector<int>> ketqua = chuyen_vi(matran);

    std::cout << "Ma trận ban đầu:" << std::endl;
    for (const auto& row : matran) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Ma trận chuyển vị:" << std::endl;
    for (const auto& row : ketqua) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}