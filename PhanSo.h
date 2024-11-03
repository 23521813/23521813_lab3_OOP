#include<bits/stdc++.h>

using namespace std;

class PhanSo {
private:
    int iTu, iMau;
    int gcd(int a, int b);     // Hàm tính ước chung lớn nhất
    void rutGon();             // Hàm rút gọn phân số

public:
    PhanSo();                  // Constructor mặc định
    PhanSo(int Tu, int Mau);   // Constructor có tham số

    PhanSo operator+(const PhanSo& other) const;
    PhanSo operator-(const PhanSo& other) const;
    PhanSo operator*(const PhanSo& other) const;
    PhanSo operator/(const PhanSo& other) const;

    // Các thao tác với phân số
    bool operator==(const PhanSo& other) const;
    bool operator!=(const PhanSo& other) const;
    bool operator>=(const PhanSo& other) const;
    bool operator<=(const PhanSo& other) const;
    bool operator>(const PhanSo& other) const;
    bool operator<(const PhanSo& other) const;

    // operator nhập và xuất
    friend istream& operator>>(istream& in, PhanSo& ps);
    friend ostream& operator<<(ostream& out, const PhanSo& ps);
};
