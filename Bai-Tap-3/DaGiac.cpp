#include "DaGiac.h"

// Constructor
DaGiac::DaGiac() : n(0), Dinh(nullptr) {}

// Destructor
DaGiac::~DaGiac() {
    delete[] Dinh; // Giải phóng bộ nhớ đã cấp phát cho mảng Dinh
}

// Nhập tọa độ các đỉnh
/*
    Input: Nhập vào số đỉnh n và tọa độ các đỉnh (x, y).
    Output: Không có (chỉ cập nhật dữ liệu trong đối tượng).
    Hướng giải thuật:
    - Đọc số đỉnh n từ bàn phím.
    - Cấp phát bộ nhớ cho mảng Dinh.
    - Sử dụng vòng lặp để nhập tọa độ từng đỉnh.
    - Lưu tọa độ vào mảng Dinh.
    */
void DaGiac::Nhap() {
    cout << "Nhap so dinh cua da giac: ";
    cin >> n;

    Dinh = new pair<double, double>[n]; // Cấp phát mảng động

    for (int i = 0; i < n; ++i) {
        cout << "Nhap toa do dinh " << i + 1 << " (x, y): ";
        cin >> Dinh[i].first >> Dinh[i].second; // Nhập tọa độ cho từng đỉnh
    }
}

// Xuất tọa độ các đỉnh
/*
    Input: Không có (chỉ sử dụng dữ liệu đã nhập).
    Output: Xuất tọa độ của các đỉnh đa giác.
    Hướng giải thuật:
    - Sử dụng vòng lặp để duyệt qua mảng Dinh.
    - In ra tọa độ của từng đỉnh theo định dạng yêu cầu.
    */
void DaGiac::Xuat() {
    for (int i = 0; i < n; ++i) {
        cout << "Toa do dinh " << i + 1 << ": (" << Dinh[i].first << ", " << Dinh[i].second << ")\n";
    }
}

// Dịch chuyển đa giác
/*
    Input: dx (double): độ dịch chuyển theo trục hoành; dy (double): độ dịch chuyển theo trục tung.
    Output: Không có (chỉ cập nhật tọa độ trong đối tượng).
    Hướng giải thuật:
    - Sử dụng vòng lặp để duyệt qua mảng Dinh.
    - Cập nhật tọa độ của từng đỉnh bằng cách cộng dx vào hoành độ và dy vào tung độ.
    */
void DaGiac::TinhTien(double dx, double dy) {
    for (int i = 0; i < n; ++i) {
        Dinh[i].first += dx; // Cộng dx vào hoành độ
        Dinh[i].second += dy; // Cộng dy vào tung độ
    }
}

// Phóng to đa giác
/*
    Input: k (double): hệ số phóng to.
    Output: Không có (chỉ cập nhật tọa độ trong đối tượng).
    Hướng giải thuật:
    - Sử dụng vòng lặp để duyệt qua mảng Dinh.
    - Cập nhật tọa độ của từng đỉnh bằng cách nhân với hệ số k.
    */
void DaGiac::PhongTo(double k) {
    for (int i = 0; i < n; ++i) {
        Dinh[i].first *= k; // Nhân với k
        Dinh[i].second *= k; // Nhân với k
    }
}

// Thu nhỏ đa giác
/*
    Input: k (double): hệ số thu nhỏ.
    Output: Không có (chỉ cập nhật tọa độ trong đối tượng).
    Hướng giải thuật:
    - Sử dụng vòng lặp để duyệt qua mảng Dinh.
    - Cập nhật tọa độ của từng đỉnh bằng cách chia cho hệ số k.
    */
void DaGiac::ThuNho(double k) {
    for (int i = 0; i < n; ++i) {
        Dinh[i].first /= k; // Chia cho k
        Dinh[i].second /= k; // Chia cho k
    }
}

// Quay đa giác
/*
    Input: goc (double): góc quay tính bằng radian.
    Output: Không có (chỉ cập nhật tọa độ trong đối tượng).
    Hướng giải thuật:
    - Tính giá trị của cos(goc) và sin(goc).
    - Sử dụng vòng lặp để duyệt qua mảng Dinh.
    - Cập nhật tọa độ mới cho từng đỉnh bằng công thức quay.
    */
void DaGiac::Quay(double goc) {
    double cosGoc = cos(goc);
    double sinGoc = sin(goc);
    double x, y;

    for (int i = 0; i < n; ++i) {
        // Áp dụng công thức quay
        x = Dinh[i].first * cosGoc - Dinh[i].second * sinGoc;
        y = Dinh[i].first * sinGoc + Dinh[i].second * cosGoc;
        Dinh[i].first = x; // Cập nhật tọa độ mới
        Dinh[i].second = y; // Cập nhật tọa độ mới
    }
}
