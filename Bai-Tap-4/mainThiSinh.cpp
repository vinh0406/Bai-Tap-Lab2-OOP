#include <iostream>
#include "ThiSinh.h"

using namespace std;

int main() {
    int n;
    cout << "Nhap so luong thi sinh: ";
    cin >> n;
    cin.ignore(); // Để loại bỏ newline trong input

    ThiSinh* ds = new ThiSinh[n]; // Cấp phát động mảng thí sinh

    // Nhập thông tin cho n thí sinh
    for (int i = 0; i < n; ++i) {
        cout << "Nhap thong tin thi sinh " << i + 1 << ":" << endl;
        ds[i].Nhap();
    }

    cout << "\nThi sinh co tong điem lon hon 15:\n";
    for (int i = 0; i < n; ++i) {
        if (ds[i].Tong() > 15) {
            ds[i].Xuat();
            cout << endl;
        }
    }

    // Tìm thí sinh có điểm cao nhất
    int maxIndex = 0;
    for (int i = 1; i < n; ++i) {
        if (ds[i].Tong() > ds[maxIndex].Tong()) {
            maxIndex = i; // Cập nhật chỉ số của thí sinh có điểm cao nhất
        }
    }

    cout << "Thi sinh co diem cao nhat (MSSV: " << ds[maxIndex].GetMSSV() << "):" << endl;
    ds[maxIndex].Xuat(); // Xuất thông tin thí sinh có điểm cao nhất

    delete[] ds; // Giải phóng bộ nhớ
    return 0;
}
