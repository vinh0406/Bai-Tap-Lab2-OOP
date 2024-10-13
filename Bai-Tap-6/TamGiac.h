#pragma once
#include <iostream>
#include <cmath>

class TamGiac {
private:
    float x1, y1;  // Tọa độ điểm A
    float x2, y2;  // Tọa độ điểm B
    float x3, y3;  // Tọa độ điểm C

public:
    TamGiac();  // Constructor
    void Nhap(); // Nhập tọa độ tam giác
    void TinhTien(float huong, float doDai); // Tịnh tiến tam giác
    void Xuat(); // Xuất tọa độ tam giác
};