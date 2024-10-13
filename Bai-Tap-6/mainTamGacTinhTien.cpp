#include "TamGiac.h"

int main() {
    TamGiac tamGiac;
    tamGiac.Nhap(); // Nhập tọa độ tam giác

    float huong, doDai;
    std::cout << "Nhap huong tinh tien (don vi la do): ";
    std::cin >> huong; // Nhập hướng tịnh tiến
    std::cout << "Nhap do dai tinh tien: ";
    std::cin >> doDai; // Nhập độ dài tịnh tiến

    tamGiac.TinhTien(huong, doDai); // Tịnh tiến tam giác
    tamGiac.Xuat(); // Xuất tọa độ tam giác

    return 0;
}
