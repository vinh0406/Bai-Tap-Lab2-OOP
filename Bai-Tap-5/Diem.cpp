#include "Diem.h"

// Hàm khởi tạo
Diem::Diem() : hoanhDo(0), tungDo(0) {}

// Nhập tọa độ điểm
// Input: Người dùng nhập vào hoành độ và tung độ của điểm.
// Output: Không có output ở đây, thông tin đã được lưu vào thuộc tính.
void Diem::Nhap() {
    std::cout << "Nhap hoanh do: ";
    std::cin >> hoanhDo;  // Nhập hoành độ
    std::cout << "Nhap tung do: ";
    std::cin >> tungDo;   // Nhập tung độ
}

// Xử lý các chỉ thị
// Input: Nhận vào chỉ thị x (kiểu int) từ người dùng.
// Output: Không có output ở đây, nhưng tọa độ có thể đã thay đổi.
void Diem::XuLyChiThi(int x) {
    switch (x) {
    case 1:
        // Nhân đôi hoành độ và tung độ
        hoanhDo *= 2; // Nhân đôi hoành độ
        tungDo *= 2;  // Nhân đôi tung độ
        break;
    case 2:
        // Gán điểm về gốc tọa độ
        hoanhDo = 0; // Gán hoành độ về 0
        tungDo = 0;  // Gán tung độ về 0
        break;
    case 3: {
        double k, d;
        // Input: Yêu cầu người dùng nhập hướng tịnh tiến (k) và độ tịnh tiến (d).
        std::cout << "Nhap huong tinh tien (k): ";
        std::cin >> k;  // Nhập hướng tịnh tiến
        std::cout << "Nhap do tinh tien (d): ";
        std::cin >> d;  // Nhập độ tịnh tiến

        // Hướng giải thuật:
        // Nếu k = 0, tịnh tiến theo trục x (hoành độ).
        // Nếu k khác 0, tịnh tiến theo trục y (tung độ).
        if (k == 0) {
            hoanhDo += d; // Tịnh tiến theo trục x
        }
        else {
            tungDo += d;  // Tịnh tiến theo trục y
        }
        break;
    }
    default:
        // Không làm gì cả nếu x khác 1, 2, 3
        break;
    }
}

// Xuất tọa độ điểm
// Input: Không có input nào, sử dụng các thuộc tính của đối tượng.
// Output: Xuất tọa độ điểm dưới dạng (hoành độ, tung độ).
void Diem::Xuat() {
    std::cout << "Toa do diem: (" << hoanhDo << ", " << tungDo << ")" << std::endl;
}
