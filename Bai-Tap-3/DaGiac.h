#pragma once
#include <iostream>
#include <cmath>
#include <utility> // for pair
using namespace std;

class DaGiac {
private:
    int n;                // Số đỉnh của đa giác
    pair<double, double>* Dinh; // Mảng động chứa tọa độ các đỉnh

public:
    DaGiac();            // Constructor
    ~DaGiac();           // Destructor
    void Nhap();         // Nhập tọa độ các đỉnh
    void Xuat();         // Xuất tọa độ các đỉnh
    void TinhTien(double dx, double dy); // Dịch chuyển
    void PhongTo(double k); // Phóng to
    void ThuNho(double k); // Thu nhỏ
    void Quay(double goc); // Quay
};
