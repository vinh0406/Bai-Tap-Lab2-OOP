#pragma once
#include <vector>
#include <utility> // for std::pair
#include <iostream>

class Polygon {
private:
    int n; // Số điểm
    std::vector<std::pair<double, double>> points; // Danh sách các điểm

public:
    Polygon(); // Hàm khởi tạo
    void Nhap(); // Nhập thông tin đa giác
    double TinhDienTich(); // Tính diện tích của đa giác
    void Xuat(); // Xuất diện tích
};