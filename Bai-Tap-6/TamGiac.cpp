#include "TamGiac.h"

// Khởi tạo
TamGiac::TamGiac() : x1(0), y1(0), x2(0), y2(0), x3(0), y3(0) {}

// Nhập tọa độ tam giác
// Input: Nhập 6 giá trị tọa độ cho 3 điểm A, B, C.
    // Output: Không có (các giá trị được lưu vào các thuộc tính x1, y1, x2, y2, x3, y3).
    // Hướng giải thuật: 
    // 1. Hiển thị thông báo yêu cầu nhập tọa độ 3 điểm.
    // 2. Sử dụng std::cin để nhận giá trị và gán vào các thuộc tính x1, y1, x2, y2, x3, y3.
void TamGiac::Nhap() {
    std::cout << "Nhap toa do 3 diem (x1, y1, x2, y2, x3, y3): ";
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
}

// Tịnh tiến tam giác
// Input: Nhận vào hướng tịnh tiến (huong) và độ dài tịnh tiến (doDai).
// Output: Không có (các giá trị tọa độ của tam giác được cập nhật).
// Hướng giải thuật:
   // 1. Chuyển đổi độ sang radian để sử dụng trong hàm cos và sin.
   // 2. Tính toán khoảng cách tịnh tiến theo trục x và y.
   // 3. Cập nhật tọa độ cho 3 điểm A, B, C bằng cách cộng thêm giá trị dx và dy vào x1, y1, x2, y2, x3, y3.

void TamGiac::TinhTien(float huong, float doDai) {

    // Chuyển đổi độ sang radian
    float radian = huong * (3.14 / 180); // Pi = 3.14

    // Tính toán tọa độ mới
    float dx = doDai * cos(radian); // Tịnh tiến theo trục x
    float dy = doDai * sin(radian); // Tịnh tiến theo trục y

    // Cập nhật tọa độ
    x1 += dx;
    y1 += dy;
    x2 += dx;
    y2 += dy;
    x3 += dx;
    y3 += dy;
}

// Xuất tọa độ tam giác
// Input: Không có (phương thức chỉ thực hiện xuất).
// Output: Xuất tọa độ 3 điểm A, B, C sau khi tịnh tiến.
// Hướng giải thuật:
   // Sử dụng std::cout để in ra tọa độ của các điểm A, B, C theo định dạng yêu cầu.
void TamGiac::Xuat() {
    std::cout << "Toa do 3 diem sau khi tinh tien:" << std::endl;
    std::cout << "Diem A: (" << x1 << ", " << y1 << ")" << std::endl;
    std::cout << "Diem B: (" << x2 << ", " << y2 << ")" << std::endl;
    std::cout << "Diem C: (" << x3 << ", " << y3 << ")" << std::endl;
}
