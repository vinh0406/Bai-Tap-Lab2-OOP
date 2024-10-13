#pragma once
#include <iostream>
#include <string>

using namespace std;

class ThiSinh {
private:
    string Ten;           // Tên thí sinh
    string MSSV;          // Mã số sinh viên
    int iNgay;           // Ngày sinh
    int iThang;          // Tháng sinh
    int iNam;            // Năm sinh
    float fToan;         // Điểm Toán
    float fVan;          // Điểm Văn
    float fAnh;          // Điểm Anh

public:
    ThiSinh();           // Hàm khởi tạo
    void Nhap();         // Nhập thông tin thí sinh
    void Xuat();         // Xuất thông tin thí sinh
    float Tong();        // Tính tổng điểm
    string GetMSSV();    // Lấy mã số sinh viên
};