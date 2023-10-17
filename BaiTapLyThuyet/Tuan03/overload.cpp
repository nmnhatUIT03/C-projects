#include <iostream>
#include <cstdlib>
#include <ctime>

class Matrix {
private:
    int rows;
    int cols;
    int** data;

public:
    Matrix(int m, int n) : rows(m), cols(n) {
        data = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new int[cols];
        }
    }

    ~Matrix() {
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }

    void randomFill() {
        srand(time(0));
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                data[i][j] = rand() % 100; // Giả sử giá trị ngẫu nhiên trong khoảng từ 0 đến 99
            }
        }
    }

    void input() {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << "Nhập phần tử [" << i << "][" << j << "]: ";
                std::cin >> data[i][j];
            }
        }
    }

    Matrix operator+(const Matrix& other) {
        if (rows != other.rows || cols != other.cols) {
            std::cout << "Không thể cộng hai ma trận có kích thước khác nhau!" << std::endl;
            return *this;
        }

        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }

        return result;
    }

    Matrix operator*(const Matrix& other) {
        if (cols != other.rows) {
            std::cout << "Không thể nhân hai ma trận có số cột của ma trận đầu bằng số dòng của ma trận sau!" << std::endl;
            return *this;
        }

        Matrix result(rows, other.cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.cols; ++j) {
                result.data[i][j] = 0;
                for (int k = 0; k < cols; ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }

        return result;
    }

    void print() {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << data[i][j] << "\t";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    int m, n;
    std::cout << "Nhập số dòng của ma trận: ";
    std::cin >> m;
    std::cout << "Nhập số cột của ma trận: ";
    std::cin >> n;

    Matrix matrix1(m, n);
    Matrix matrix2(m, n);

    std::cout << "Nhập ma trận thứ nhất:\n";
    matrix1.input();

    std::cout << "Nhập ma trận thứ hai:\n";
    matrix2.input();

    std::cout << "Ma trận thứ nhất:\n";
    matrix1.print();

    std::cout << "Ma trận thứ hai:\n";
    matrix2.print();

    Matrix sum = matrix1 + matrix2;
    std::cout << "Tổng hai ma trận:\n";
    sum.print();

    Matrix product = matrix1 * matrix2;
    std::cout << "Tích hai ma trận:\n";
    product.print();

    return 0;
}