#pragma once
#include <iostream>
#include <vector>

class List {
private:
    double* data;             // Con trỏ quản lý mảng động
    unsigned int size;        // Kích thước của list

public:
    List();                   // Constructor
    ~List();                  // Destructor
    void Add(double x);       // Thêm phần tử vào list
    void RemoveFirst(double x); // Xóa phần tử đầu tiên có giá trị x
    void RemoveAll(double x);   // Xóa tất cả phần tử có giá trị x
    void Update(unsigned int index, double y); // Thay đổi phần tử tại index
    void Display() const;      // Hiển thị danh sách
};