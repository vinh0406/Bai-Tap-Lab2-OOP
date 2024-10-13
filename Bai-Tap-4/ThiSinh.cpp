#include "ThiSinh.h"

// Constructor
ThiSinh::ThiSinh() : iNgay(0), iThang(0), iNam(0), fToan(0), fVan(0), fAnh(0) {}

// Nhập thông tin thí sinh
// Input: Nhập tên, mã số sinh viên, ngày tháng năm sinh và điểm các môn.
// Output: Không có (thông tin được lưu vào thuộc tính của đối tượng).
void ThiSinh::Nhap() {
    cout << "Nhap ten thí sinh: ";
    getline(cin, Ten);
    cout << "Nhap MSSV: ";
    getline(cin, MSSV);
    cout << "Nhap ngay sinh (dd mm yyyy): ";
    cin >> iNgay >> iThang >> iNam;
    cout << "Nhap diem Toan: ";
    cin >> fToan;
    cout << "Nhap diem Van: ";
    cin >> fVan;
    cout << "Nhap diem Anh: ";
    cin >> fAnh;
    cin.ignore(); // Để loại bỏ newline trong input

}

// Xuất thông tin thí sinh
// Input: Không có (thông tin được lấy từ thuộc tính của đối tượng).
// Output: Xuất tên, mã số sinh viên, ngày tháng năm sinh và điểm các môn.
void ThiSinh::Xuat() {
    cout << "Ten: " << Ten << endl;
    cout << "MSSV: " << MSSV << endl;
    cout << "Ngay sinh: " << iNgay << "/" << iThang << "/" << iNam << endl;
    cout << "Diem Toan: " << fToan << endl;
    cout << "Diem Van: " << fVan << endl;
    cout << "Diem Anh: " << fAnh << endl;
    cout << "Tong diem: " << Tong() << endl; // Tính và xuất tổng điểm
}

// Tính tổng điểm
// Input: Không có (sử dụng các thuộc tính fToan, fVan, fAnh).
// Output: Trả về tổng điểm của thí sinh (float).
float ThiSinh::Tong() {
    return fToan + fVan + fAnh; // Tính tổng điểm
}

// Lấy mã số sinh viên
// Input: Không có (sử dụng thuộc tính MSSV).
// Output: Trả về MSSV của thí sinh.
string ThiSinh::GetMSSV() {
    return MSSV; // Trả về mã số sinh viên
}
