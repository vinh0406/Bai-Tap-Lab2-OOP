#include <iostream>
#include "List.h"

int main() {
    List myList; // Khởi tạo danh sách
    int n;

    while (true) {
        std::cout << "Nhap chi thi (0: Them, 1: Xoa phan tu dau, 2: Xoa tat ca, 3: Thay doi, -1: Ket thuc): ";
        std::cin >> n;

        if (n == -1) {
            break; // Kết thúc chương trình
        }
        else if (n == 0) {
            double x;
            std::cout << "Nhap gia tri x: ";
            std::cin >> x;
            myList.Add(x); // Thêm phần tử vào danh sách
        }
        else if (n == 1) {
            double x;
            std::cout << "Nhap gia tri x: ";
            std::cin >> x;
            myList.RemoveFirst(x); // Xóa phần tử đầu tiên có giá trị x
        }
        else if (n == 2) {
            double x;
            std::cout << "Nhap gia tri x: ";
            std::cin >> x;
            myList.RemoveAll(x); // Xóa tất cả phần tử có giá trị x
        }
        else if (n == 3) {
            unsigned int index;
            double y;
            std::cout << "Nhap chi so x: ";
            std::cin >> index;
            std::cout << "Nhap gia tri y: ";
            std::cin >> y;
            myList.Update(index, y); // Thay đổi phần tử tại index
        }
    }

    std::cout << "Danh sach cuoi cung: ";
    myList.Display(); // Hiển thị danh sách cuối cùng
    return 0;
}
