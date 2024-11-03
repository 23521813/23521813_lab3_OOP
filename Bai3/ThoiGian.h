#include<bits/stdc++.h>

using namespace std;

class ThoiGian {
private:
    int iGio;   // Số giờ
    int iPhut;  // Số phút
    int iGiay;  // Số giây

public:
    // Constructors
    ThoiGian();
    ThoiGian(int Gio, int Phut, int Giay);

    int TinhGiay() const;                 // Tính tổng số giây
    void TinhLaiGio(int Giay);            // Tính lại giờ, phút, giây từ tổng giây

    ThoiGian operator+(int Giay) const;
    ThoiGian operator-(int Giay) const;
    ThoiGian operator+(const ThoiGian& a) const;
    ThoiGian operator-(const ThoiGian& a) const;

    ThoiGian& operator++();
    ThoiGian operator++(int);
    ThoiGian& operator--();
    ThoiGian operator--(int);

    bool operator==(const ThoiGian& a) const;
    bool operator!=(const ThoiGian& a) const;
    bool operator>=(const ThoiGian& a) const;
    bool operator<=(const ThoiGian& a) const;
    bool operator>(const ThoiGian& a) const;
    bool operator<(const ThoiGian& a) const;

    friend istream& operator>>(istream& in, ThoiGian& tg);
    friend ostream& operator<<(ostream& out, const ThoiGian& tg);
};
