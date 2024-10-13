#pragma once
#include <iostream>

class Diem {
private:
    double hoanhDo;  // Hoành độ
    double tungDo;   // Tung độ

public:
    Diem();                      // Hàm khởi tạo
    void Nhap();                 // Nhập tọa độ điểm
    void XuLyChiThi(int x);      // Xử lý các chỉ thị
    void Xuat();                 // Xuất tọa độ điểm
};