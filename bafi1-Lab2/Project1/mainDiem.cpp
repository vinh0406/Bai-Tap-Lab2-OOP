#include <iostream>
#include "Diem.h"
using namespace std;

int main() {
    int hoanh, tung;

    // Nhập dữ liệu cho điểm d1 từ bàn phím và khởi tạo đối tượng bằng constructor có tham số
    cout << "Nhap hoanh do va tung do cho diem d1: ";
    cin >> hoanh >> tung;
    Diem d1(hoanh, tung);
    cout << "Diem d1 sau khi nhap: ";
    d1.Xuat();

    // Sử dụng constructor sao chép để tạo d2 từ d1
    Diem d2(d1);
    cout << "Diem d2 duoc tao tu d1 (copy constructor): ";
    d2.Xuat();

    // Nhập dữ liệu cho d2 qua setter
    cout << "Nhap hoanh do va tung do moi cho diem d2: ";
    cin >> hoanh >> tung;
    d2.SetHoanhDo(hoanh);
    d2.SetTungDo(tung);
    cout << "Diem d2 sau khi set hoanh do va tung do moi: ";
    d2.Xuat();

    // Sử dụng getter để lấy hoành độ và tung độ của d2
    cout << "Hoanh do cua d2: " << d2.GetHoanhDo() << endl;
    cout << "Tung do cua d2: " << d2.GetTungDo() << endl;

    // Tính toán dịch chuyển điểm d2
    int dHoanh, dTung;
    cout << "Nhap hoanh do va tung do can dich chuyen cho d2: ";
    cin >> dHoanh >> dTung;
    d2.TinhTien(dHoanh, dTung);
    cout << "Diem d2 sau khi dich chuyen: ";
    d2.Xuat();

    // Sử dụng setter để thay đổi giá trị d1
    cout << "Nhap hoanh do va tung do moi cho diem d1: ";
    cin >> hoanh >> tung;
    d1.SetHoanhDo(hoanh);
    d1.SetTungDo(tung);
    cout << "Diem d1 sau khi thay doi: ";
    d1.Xuat();

    return 0;
}
