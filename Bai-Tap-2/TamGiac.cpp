#include "TamGiac.h"
#include <iostream>
#include <cmath>  
using namespace std;

/**
 * Phương thức: Nhập tọa độ cho các đỉnh của tam giác.
 *
 * Input: Không có tham số, người dùng nhập từ bàn phím 3 cặp số thực (x, y) cho các đỉnh A, B, C.
 * Output: Cập nhật giá trị tọa độ của các đỉnh A, B, C.
 * Giải thuật: Đơn giản nhập giá trị tọa độ từ bàn phím và lưu vào các thuộc tính A, B, C.
 */
void TamGiac::Nhap() {
    cout << "Nhap toa do dinh A (x y): ";
    cin >> A.first >> A.second;
    cout << "Nhap toa do dinh B (x y): ";
    cin >> B.first >> B.second;
    cout << "Nhap toa do dinh C (x y): ";
    cin >> C.first >> C.second;
}

/**
 * Phương thức: Xuất tọa độ của các đỉnh của tam giác.
 *
 * Input: Không có tham số.
 * Output: In tọa độ của các đỉnh A, B, C ra màn hình.
 * Giải thuật: Sử dụng hàm cout để xuất giá trị của các cặp tọa độ A, B, C.
 */
void TamGiac::Xuat() const {
    cout << "Dinh A: (" << A.first << ", " << A.second << ")\n";
    cout << "Dinh B: (" << B.first << ", " << B.second << ")\n";
    cout << "Dinh C: (" << C.first << ", " << C.second << ")\n";
}

/**
 * Phương thức: Dịch chuyển tam giác theo vector (dx, dy).
 *
 * Input: Hai giá trị số thực dx và dy là khoảng dịch chuyển theo trục x và y.
 * Output: Cập nhật tọa độ của các đỉnh A, B, C sau khi dịch chuyển.
 * Giải thuật: Cộng thêm dx vào hoành độ và dy vào tung độ của mỗi đỉnh (A, B, C).
 */
void TamGiac::TinhTien(double dx, double dy) {
    A.first += dx; A.second += dy;
    B.first += dx; B.second += dy;
    C.first += dx; C.second += dy;
}

/**
 * Phương thức: Phóng to tam giác theo tỉ lệ k.
 *
 * Input: Giá trị k (số thực) là tỉ lệ phóng to.
 *        k > 1 sẽ phóng to tam giác, k < 1 sẽ thu nhỏ tam giác.
 * Output: Cập nhật tọa độ của các đỉnh A, B, C sau khi phóng to.
 * Giải thuật: Nhân tọa độ của mỗi đỉnh với hệ số k để thay đổi kích thước tam giác.
 */
void TamGiac::PhongTo(double k) {
    A.first *= k;
    A.second *= k;
    B.first *= k;
    B.second *= k;
    C.first *= k;
    C.second *= k;
}

/**
 * Phương thức: Thu nhỏ tam giác theo tỉ lệ k.
 *
 * Input: Giá trị k (số thực) là tỉ lệ thu nhỏ.
 *        k > 1 sẽ thu nhỏ tam giác, k < 1 sẽ phóng to tam giác.
 * Output: Cập nhật tọa độ của các đỉnh A, B, C sau khi thu nhỏ.
 * Giải thuật: Chia tọa độ của mỗi đỉnh cho k để thay đổi kích thước tam giác.
 */
void TamGiac::ThuNho(double k) {
    A.first /= k;
    A.second /= k;
    B.first /= k;
    B.second /= k;
    C.first /= k;
    C.second /= k;
}

/**
 * Phương thức: Quay tam giác quanh gốc tọa độ với góc quay goc (radian).
 *
 * Input: Giá trị goc (số thực) là góc quay tính bằng radian.
 * Output: Cập nhật tọa độ của các đỉnh A, B, C sau khi quay.
 * Giải thuật:
 * 1. Sử dụng công thức biến đổi tọa độ khi quay trong mặt phẳng 2D:
 *    x' = x * cos(goc) - y * sin(goc)
 *    y' = x * sin(goc) + y * cos(goc)
 * 2. Áp dụng công thức trên cho từng đỉnh A, B, C.
 */
void TamGiac::Quay(double goc) {
    double cosTheta = cos(goc);
    double sinTheta = sin(goc);

    // Quay điểm A
    double xA = A.first, yA = A.second;
    A.first = xA * cosTheta - yA * sinTheta;
    A.second = xA * sinTheta + yA * cosTheta;

    // Quay điểm B
    double xB = B.first, yB = B.second;
    B.first = xB * cosTheta - yB * sinTheta;
    B.second = xB * sinTheta + yB * cosTheta;

    // Quay điểm C
    double xC = C.first, yC = C.second;
    C.first = xC * cosTheta - yC * sinTheta;
    C.second = xC * sinTheta + yC * cosTheta;
}
