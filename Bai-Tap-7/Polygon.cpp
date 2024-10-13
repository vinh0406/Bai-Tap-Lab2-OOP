#include "Polygon.h"

// Hàm khởi tạo
Polygon::Polygon() : n(0) {}

// Nhập thông tin đa giác
/*
 * Input:
 *  - Số điểm n (phải lớn hơn 2).
 *  - Tọa độ của n điểm dưới dạng các cặp (x, y).
 *
 * Output:
 *  - Không có (các giá trị được lưu vào thuộc tính của đối tượng).
 *
 * Hướng giải thuật:
 *  - Nhập số điểm từ người dùng và kiểm tra điều kiện.
 *  - Nếu số điểm không hợp lệ (<= 2), yêu cầu nhập lại.
 *  - Dùng vector để lưu trữ tọa độ của từng điểm.
 *  - Lặp qua n lần để nhập tọa độ cho từng điểm.
 */
void Polygon::Nhap() {
    std::cout << "Nhap so luong diem (n > 2): ";
    std::cin >> n;

    // Kiểm tra số điểm
    while (n <= 2) {
        std::cout << "So luong diem phai lon hon 2. Vui long nhap lai: ";
        std::cin >> n;
    }

    points.resize(n); // Đặt kích thước cho danh sách điểm

    // Nhập tọa độ cho từng điểm
    for (int i = 0; i < n; ++i) {
        std::cout << "Nhap toa do diem " << i + 1 << " (x, y): ";
        std::cin >> points[i].first >> points[i].second;
    }
}

 // Tính diện tích của đa giác (sử dụng công thức Shoelace)
/*
 * Input:
 *  - Không có (phương thức chỉ tính toán diện tích).
 *
 * Output:
 *  - Trả về diện tích của đa giác dưới dạng kiểu double.
 *
 * Hướng giải thuật:
 *  - Dùng công thức Shoelace để tính diện tích.
 *  - Lặp qua từng điểm và tính toán theo công thức.
 *  - Trả về diện tích tuyệt đối chia cho 2.
 */
double Polygon::TinhDienTich() {
    double area = 0.0;

    for (int i = 0; i < n; ++i) {
        int next = (i + 1) % n; // Lấy chỉ số điểm tiếp theo
        area += points[i].first * points[next].second;
        area -= points[next].first * points[i].second;
    }

    return std::abs(area) / 2.0; // Trả về diện tích
}

 // Xuất diện tích
/*
 * Input:
 *  - Không có (phương thức chỉ xuất diện tích).
 *
 * Output:
 *  - In ra diện tích của đa giác.
 *
 * Hướng giải thuật:
 *  - Gọi phương thức TinhDienTich để lấy diện tích.
 *  - In ra diện tích.
 */
void Polygon::Xuat() {
    double area = TinhDienTich();
    std::cout << "Dien tich cua da giac: " << area << std::endl;
}

