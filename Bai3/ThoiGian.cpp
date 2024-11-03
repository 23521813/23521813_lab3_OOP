#include "ThoiGian.h"

// Constructors
ThoiGian::ThoiGian() : iGio(0), iPhut(0), iGiay(0) {}

ThoiGian::ThoiGian(int Gio, int Phut, int Giay) : iGio(Gio), iPhut(Phut), iGiay(Giay) {
}

// Phương thức TinhGiay
int ThoiGian::TinhGiay() const {
    return iGio * 3600 + iPhut * 60 + iGiay;
}

// Phương thức TinhLaiGio
void ThoiGian::TinhLaiGio(int Giay) {
    iGio = Giay / 3600;
    Giay %= 3600;
    iPhut = Giay / 60;
    iGiay = Giay % 60;
}

ThoiGian ThoiGian::operator+(int Giay) const {
    ThoiGian temp = *this;
    temp.TinhLaiGio(this->TinhGiay() + Giay);
    return temp;
}

ThoiGian ThoiGian::operator-(int Giay) const {
    ThoiGian temp = *this;
    temp.TinhLaiGio(this->TinhGiay() - Giay);
    return temp;
}

ThoiGian ThoiGian::operator+(const ThoiGian& a) const {
    return ThoiGian(iGio + a.iGio, iPhut + a.iPhut, iGiay + a.iGiay);
}

ThoiGian ThoiGian::operator-(const ThoiGian& a) const {
    return ThoiGian(iGio - a.iGio, iPhut - a.iPhut, iGiay - a.iGiay);
}

// Toán tử ++ và --
ThoiGian& ThoiGian::operator++() {
    *this = *this + 1;
    return *this;
}

ThoiGian ThoiGian::operator++(int) {
    ThoiGian temp = *this;
    *this = *this + 1;
    return temp;
}

ThoiGian& ThoiGian::operator--() {
    *this = *this - 1;
    return *this;
}

ThoiGian ThoiGian::operator--(int) {
    ThoiGian temp = *this;
    *this = *this - 1;
    return temp;
}

// Toán tử so sánh
bool ThoiGian::operator==(const ThoiGian& a) const {
    return this->TinhGiay() == a.TinhGiay();
}

bool ThoiGian::operator!=(const ThoiGian& a) const {
    return !(*this == a);
}

bool ThoiGian::operator>=(const ThoiGian& a) const {
    return this->TinhGiay() >= a.TinhGiay();
}

bool ThoiGian::operator<=(const ThoiGian& a) const {
    return this->TinhGiay() <= a.TinhGiay();
}

bool ThoiGian::operator>(const ThoiGian& a) const {
    return this->TinhGiay() > a.TinhGiay();
}

bool ThoiGian::operator<(const ThoiGian& a) const {
    return this->TinhGiay() < a.TinhGiay();
}

// Operator nhập thời gian
istream& operator>>(istream& in, ThoiGian& tg) {
    cout << "Nhap gio: ";
    in >> tg.iGio;
    cout << "Nhap phut: ";
    in >> tg.iPhut;
    cout << "Nhap giay: ";
    in >> tg.iGiay;
    return in;
}

// Operator xuất thời gian
ostream& operator<<(ostream& out, const ThoiGian& tg) {
    out << tg.iGio << "h:" << tg.iPhut << "m:" << tg.iGiay << "s";
    return out;
}
