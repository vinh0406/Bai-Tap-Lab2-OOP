#include "DaGiac.h"

int main() {
    DaGiac dg;

    // Nhập tọa độ cho đa giác
    dg.Nhap();
    cout << "Toa do cac dinh cua da giac:\n";
    dg.Xuat();

    // Dịch chuyển đa giác
    double dx, dy;
    cout << "Nhap vector dich chuyen (dx, dy): ";
    cin >> dx >> dy;
    dg.TinhTien(dx, dy);
    cout << "Toa do da giac sau khi dich chuyen:\n";
    dg.Xuat();

    // Phóng to đa giác
    double k;
    cout << "Nhap he so phong to: ";
    cin >> k;
    dg.PhongTo(k);
    cout << "Toa do da giac sau khi phong to:\n";
    dg.Xuat();

    // Thu nhỏ đa giác
    cout << "Nhap he so thu nho: ";
    cin >> k;
    dg.ThuNho(k);
    cout << "Toa do da giac sau khi thu nho:\n";
    dg.Xuat();

    // Quay đa giác
    double goc;
    cout << "Nhap goc quay (radian): ";
    cin >> goc;
    dg.Quay(goc);
    cout << "Toa do da giac sau khi quay:\n";
    dg.Xuat();

    return 0;
}
