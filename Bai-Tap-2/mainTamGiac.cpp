#include "TamGiac.h"
#include <iostream>
using namespace std;

int main() {
    TamGiac tg;

    cout << "Nhap tam giac:\n";
    tg.Nhap();

    cout << "Tam giac vua nhap:\n";
    tg.Xuat();

    // Dịch chuyển tam giác
    double dx, dy;
    cout << "\nNhap gia tri tinh tien (dx, dy): ";
    cin >> dx >> dy;
    tg.TinhTien(dx, dy);
    cout << "Tam giac sau khi tinh tien:\n";
    tg.Xuat();

    // Phóng to tam giác
    double k;
    cout << "\nNhap he so phong to: ";
    cin >> k;
    tg.PhongTo(k);
    cout << "Tam giac sau khi phong to:\n";
    tg.Xuat();

    // Thu nhỏ tam giác
    cout << "\nNhap he so thu nho: ";
    cin >> k;
    tg.ThuNho(k);
    cout << "Tam giac sau khi thu nho:\n";
    tg.Xuat();

    // Quay tam giác
    double goc;
    cout << "\nNhap goc quay (radian): ";
    cin >> goc;
    tg.Quay(goc);
    cout << "Tam giac sau khi quay:\n";
    tg.Xuat();

    return 0;
}
