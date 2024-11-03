#include "PhanSo.h"

int PhanSo::gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

void PhanSo::rutGon() {
    int _gcd = gcd(iTu, iMau);
    iTu /= _gcd;
    iMau /= _gcd;
    if (iMau < 0) {
        iTu *= -1;
        iMau *= -1;
    }
}

PhanSo::PhanSo() : iTu(0), iMau(1) {}

PhanSo::PhanSo(int Tu, int Mau) : iTu(Tu), iMau(Mau) {
    rutGon();
}

PhanSo PhanSo::operator+(const PhanSo& other) const {
    return PhanSo(iTu * other.iMau + other.iTu * iMau, iMau * other.iMau);
}

PhanSo PhanSo::operator-(const PhanSo& other) const {
    return PhanSo(iTu * other.iMau - other.iTu * iMau, iMau * other.iMau);
}

PhanSo PhanSo::operator*(const PhanSo& other) const {
    return PhanSo(iTu * other.iTu, iMau * other.iMau);
}

PhanSo PhanSo::operator/(const PhanSo& other) const {
    return PhanSo(iTu * other.iMau, iMau * other.iTu);
}

bool PhanSo::operator==(const PhanSo& other) const {
    return iTu == other.iTu && iMau == other.iMau;
}

bool PhanSo::operator!=(const PhanSo& other) const {
    return !(*this == other);
}

bool PhanSo::operator>=(const PhanSo& other) const {
    return iTu * other.iMau >= other.iTu * iMau;
}

bool PhanSo::operator<=(const PhanSo& other) const {
    return iTu * other.iMau <= other.iTu * iMau;
}

bool PhanSo::operator>(const PhanSo& other) const {
    return iTu * other.iMau > other.iTu * iMau;
}

bool PhanSo::operator<(const PhanSo& other) const {
    return iTu * other.iMau < other.iTu * iMau;
}

istream& operator>>(istream& in, PhanSo& ps) {
    cout << "Nhap tu so: ";
    in >> ps.iTu;
    cout << "Nhap mau so: ";
    in >> ps.iMau;
    ps.rutGon();
    return in;
}

ostream& operator<<(ostream& out, const PhanSo& ps) {
    out << ps.iTu;
    if (ps.iMau != 1) out << "/" << ps.iMau;
    return out;
}

