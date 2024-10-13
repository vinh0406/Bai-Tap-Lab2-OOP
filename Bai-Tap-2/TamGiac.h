#pragma once
#include <iostream>
#include <utility> 
#include <cmath>   

class TamGiac {
private:
    std::pair<double, double> A, B, C;  // Đỉnh A, B, C
public:
    void Nhap();                  // Nhập tọa độ 3 đỉnh
    void Xuat() const;            // Xuất tọa độ 3 đỉnh
    void TinhTien(double dx, double dy); // Dịch chuyển tam giác
    void PhongTo(double k);        // Phóng to tam giác
    void ThuNho(double k);         // Thu nhỏ tam giác
    void Quay(double goc);         // Quay tam giác
};
