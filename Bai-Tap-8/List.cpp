#include "List.h"

// Khởi tạo list rỗng
List::List() : data(nullptr), size(0) {}

// Giải phóng bộ nhớ
List::~List() {
    delete[] data;
}

// Thêm phần tử vào list
/*
 * Input:
 *  - x: giá trị cần thêm vào list.
 *
 * Output:
 *  - Không có.
 *
 * Hướng giải thuật:
 *  - Tạo một mảng mới có kích thước lớn hơn .
 *  - Sao chép các giá trị từ mảng cũ sang mảng mới.
 *  - Thêm giá trị x vào cuối mảng mới.
 *  - Giải phóng bộ nhớ của mảng cũ và cập nhật con trỏ.
 */
void List::Add(double x) {
    double* newData = new double[size + 1]; // Tạo mảng mới lớn hơn 1
    for (unsigned int i = 0; i < size; ++i) {
        newData[i] = data[i]; // Sao chép dữ liệu cũ vào mảng mới
    }
    newData[size] = x; // Thêm phần tử mới vào cuối mảng
    delete[] data;     // Giải phóng bộ nhớ cũ
    data = newData;    // Cập nhật con trỏ
    size++;            // Tăng kích thước
}

 // Xóa phần tử đầu tiên có giá trị x
/*
 * Input:
 *  - x: giá trị cần xóa.
 *
 * Output:
 *  - Không có.
 *
 * Hướng giải thuật:
 *  - Lặp qua danh sách để tìm phần tử đầu tiên có giá trị x.
 *  - Tạo một mảng mới nhỏ hơn 1 và sao chép dữ liệu, bỏ qua phần tử x.
 *  - Giải phóng bộ nhớ mảng cũ và cập nhật con trỏ.
 */
void List::RemoveFirst(double x) {
    for (unsigned int i = 0; i < size; ++i) {
        if (data[i] == x) { // Tìm phần tử đầu tiên
            double* newData = new double[size - 1]; // Tạo mảng mới nhỏ hơn 1
            for (unsigned int j = 0; j < i; ++j) {
                newData[j] = data[j]; // Sao chép phần tử trước vị trí x
            }
            for (unsigned int j = i + 1; j < size; ++j) {
                newData[j - 1] = data[j]; // Sao chép phần tử sau vị trí x
            }
            delete[] data;     // Giải phóng bộ nhớ cũ
            data = newData;    // Cập nhật con trỏ
            size--;            // Giảm kích thước
            return;            // Kết thúc phương thức
        }
    }
}

 // Xóa tất cả phần tử có giá trị x
/*
 * Input:
 *  - x: giá trị cần xóa.
 *
 * Output:
 *  - Không có.
 *
 * Hướng giải thuật:
 *  - Tạo một mảng mới và lặp qua danh sách.
 *  - Nếu phần tử không phải là x, sao chép vào mảng mới.
 *  - Giải phóng bộ nhớ của mảng cũ và cập nhật con trỏ.
 */
void List::RemoveAll(double x) {
    double* newData = new double[size]; // Tạo mảng mới để chứa phần tử còn lại
    unsigned int newSize = 0; // Kích thước mới

    for (unsigned int i = 0; i < size; ++i) {
        if (data[i] != x) { // Nếu không phải là phần tử cần xóa
            newData[newSize++] = data[i]; // Sao chép vào mảng mới
        }
    }

    delete[] data; // Giải phóng bộ nhớ cũ
    data = newData; // Cập nhật con trỏ
    size = newSize; // Cập nhật kích thước
}

 // Thay đổi phần tử tại index
/*
 * Input:
 *  - index: chỉ số cần thay đổi.
 *  - y: giá trị mới.
 *
 * Output:
 *  - Không có.
 *
 * Hướng giải thuật:
 *  - Kiểm tra xem index có hợp lệ không.
 *  - Nếu hợp lệ, cập nhật giá trị tại index.
 */
void List::Update(unsigned int index, double y) {
    if (index < size) { // Kiểm tra index hợp lệ
        data[index] = y; // Thay đổi giá trị tại index
    }
}

 // Hiển thị danh sách
/*
 * Input:
 *  - Không có.
 *
 * Output:
 *  - In ra danh sách hiện tại.
 *
 * Hướng giải thuật:
 *  - Lặp qua các phần tử trong list và in ra.
 */
void List::Display() const {
    std::cout << "[";
    for (unsigned int i = 0; i < size; ++i) {
        std::cout << data[i];
        if (i < size - 1) {
            std::cout << ", "; // Thêm dấu phẩy giữa các phần tử
        }
    }
    std::cout << "]" << std::endl; // Kết thúc danh sách
}

