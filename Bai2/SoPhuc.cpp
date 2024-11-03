#include "SoPhuc.h"

// Constructor không tham số
SoPhuc::SoPhuc() : dThuc(0), dAo(0) {}

// Constructor có tham số
SoPhuc::SoPhuc(double thuc, double ao) : dThuc(thuc), dAo(ao) {}

// Operator cộng hai số phức
SoPhuc SoPhuc::operator+(const SoPhuc& sp) const {
    return SoPhuc(dThuc + sp.dThuc, dAo + sp.dAo);
}

// Operator trừ hai số phức
SoPhuc SoPhuc::operator-(const SoPhuc& sp) const {
    return SoPhuc(dThuc - sp.dThuc, dAo - sp.dAo);
}

// Operator nhân hai số phức
SoPhuc SoPhuc::operator*(const SoPhuc& sp) const {
    return SoPhuc(dThuc * sp.dThuc - dAo * sp.dAo, dThuc * sp.dAo + dAo * sp.dThuc);
}

// Operator chia hai số phức
SoPhuc SoPhuc::operator/(const SoPhuc& sp) const {
    double mau = sp.dThuc * sp.dThuc + sp.dAo * sp.dAo;
    return SoPhuc((dThuc * sp.dThuc + dAo * sp.dAo) / mau, (dAo * sp.dThuc - dThuc * sp.dAo) / mau);
}

// Operator == so sánh bằng hai số phức
bool SoPhuc::operator==(const SoPhuc& sp) const {
    return dThuc == sp.dThuc && dAo == sp.dAo;
}

// Operator != so sánh khác hai số phức
bool SoPhuc::operator!=(const SoPhuc& sp) const {
    return !(*this == sp);
}

// Operator nhập số phức
istream& operator>>(istream& in, SoPhuc& sp) {
    cout << "Nhap phan thuc: ";
    in >> sp.dThuc;
    cout << "Nhap phan ao: ";
    in >> sp.dAo;
    return in;
}

// Operator xuất số phức
ostream& operator<<(ostream& out, const SoPhuc& sp) {
    out << sp.dThuc << (sp.dAo >= 0 ? " + " : " - ") << abs(sp.dAo) << "i";
    return out;
}
