#include <iostream>
#include "Diem.h"

using namespace std;

int main() {
    Diem point; // Khởi tạo đối tượng Diem
    point.Nhap(); // Nhập tọa độ điểm

    int n;
    cout << "Nhap so luong chi thi: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int x;
        cout << "Nhap chi thi x (1, 2, 3): ";
        cin >> x; // Nhập chỉ thị
        point.XuLyChiThi(x); // Xử lý chỉ thị
    }

    point.Xuat(); // Xuất tọa độ điểm
    return 0;
}
