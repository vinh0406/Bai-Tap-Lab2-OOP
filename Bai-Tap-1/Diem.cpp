#include <iostream>
#include "Diem.h"
using namespace std;

// Constructor không tham số
// Input: Không có
// Output: Khởi tạo đối tượng Diem với iHoanh = 0 và iTung = 0
// Hướng giải thuật: Gán giá trị mặc định 0 cho hai thuộc tính iHoanh và iTung
Diem::Diem() : iHoanh(0), iTung(0) {}

// Constructor có tham số
// Input: int Hoanh - hoành độ, int Tung - tung độ
// Output: Khởi tạo đối tượng Diem với iHoanh = Hoanh và iTung = Tung
// Hướng giải thuật: Gán giá trị của tham số Hoanh cho thuộc tính iHoanh và Tung cho iTung
Diem::Diem(int Hoanh, int Tung) : iHoanh(Hoanh), iTung(Tung) {}

// Constructor sao chép
// Input: const Diem& x - đối tượng Diem khác để sao chép
// Output: Khởi tạo đối tượng mới với cùng giá trị hoành độ và tung độ như đối tượng được sao chép
// Hướng giải thuật: Sao chép giá trị của iHoanh và iTung từ đối tượng x vào đối tượng mới
Diem::Diem(const Diem& x) : iHoanh(x.iHoanh), iTung(x.iTung) {}

// Getter cho hoành độ
// Input: Không có
// Output: Trả về giá trị hiện tại của hoành độ iHoanh
// Hướng giải thuật: Đọc giá trị của thuộc tính iHoanh và trả về giá trị đó
int Diem::GetHoanhDo() const {
    return iHoanh;
}

// Getter cho tung độ
// Input: Không có
// Output: Trả về giá trị hiện tại của tung độ iTung
// Hướng giải thuật: Đọc giá trị của thuộc tính iTung và trả về giá trị đó
int Diem::GetTungDo() const {
    return iTung;
}

// Setter cho hoành độ
// Input: int Hoanh - giá trị mới của hoành độ
// Output: Không có (thay đổi giá trị iHoanh)
// Hướng giải thuật: Gán giá trị mới của tham số Hoanh vào thuộc tính iHoanh
void Diem::SetHoanhDo(int Hoanh) {
    iHoanh = Hoanh;
}

// Setter cho tung độ
// Input: int Tung - giá trị mới của tung độ
// Output: Không có (thay đổi giá trị iTung)
// Hướng giải thuật: Gán giá trị mới của tham số Tung vào thuộc tính iTung
void Diem::SetTungDo(int Tung) {
    iTung = Tung;
}

// Hàm xuất giá trị điểm
// Input: Không có
// Output: Xuất ra màn hình giá trị của hoành độ và tung độ dưới định dạng "Diem(iHoanh, iTung)"
// Hướng giải thuật: Sử dụng cout để in ra giá trị của iHoanh và iTung
void Diem::Xuat() const {
    cout << "Diem(" << iHoanh << ", " << iTung << ")" << endl;
}

// Hàm tính điểm mới sau khi dịch chuyển
// Input: int dHoanh - giá trị dịch chuyển hoành độ, int dTung - giá trị dịch chuyển tung độ
// Output: Không có (thay đổi giá trị iHoanh và iTung sau khi dịch chuyển)
// Hướng giải thuật: Cộng giá trị dHoanh vào iHoanh và dTung vào iTung để cập nhật vị trí mới
void Diem::TinhTien(int dHoanh, int dTung) {
    iHoanh += dHoanh;
    iTung += dTung;
}
