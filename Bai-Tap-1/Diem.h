#pragma once
class Diem {
private:
    int iHoanh;
    int iTung;

public:
    // Constructor không tham số
    Diem();

    // Constructor có tham số
    Diem(int Hoanh, int Tung);

    // Constructor sao chép
    Diem(const Diem& x);

    // Getter cho hoành độ
    int GetHoanhDo() const;

    // Getter cho tung độ
    int GetTungDo() const;

    // Setter cho hoành độ
    void SetHoanhDo(int Hoanh);

    // Setter cho tung độ
    void SetTungDo(int Tung);

    // Hàm xuất giá trị điểm
    void Xuat() const;

    // Hàm tính điểm mới sau khi dịch chuyển (hoành, tung)
    void TinhTien(int dHoanh, int dTung);
};