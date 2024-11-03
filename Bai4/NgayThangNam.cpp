#include "NgayThangNam.h"

// Hàm kiểm tra năm nhuận
bool NgayThangNam::NamNhuan(int nam) const {
    return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}

// Chuẩn hóa ngày tháng năm
void NgayThangNam::ChuanHoa() {
    if (iThang < 1) {
        iThang = 1;
    } else if (iThang > 12) {
        iThang = 12;
    }

    int soNgayTrongThang[] = { 0, 31, (NamNhuan(iNam) ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 30 };

    if (iNgay < 1) {
        iNgay = 1;
    } else if (iNgay > soNgayTrongThang[iThang]) {
        iNgay = soNgayTrongThang[iThang];
    }
}

// Constructors
NgayThangNam::NgayThangNam() : iNgay(18), iThang(12), iNam(2005) {}

NgayThangNam::NgayThangNam(int Nam, int Thang, int Ngay) : iNam(Nam), iThang(Thang), iNgay(Ngay) {
    ChuanHoa();
}

// Tính tổng số ngày từ 01/01/0000
int NgayThangNam::TinhNgay() const {
    int tongNgay = 0;
    for (int nam = 0; nam < iNam; ++nam) {
        tongNgay += (NamNhuan(nam) ? 366 : 365);
    }
    for (int thang = 1; thang < iThang; ++thang) {
        tongNgay += (NamNhuan(iNam) && thang == 2 ? 29 : (thang == 4 || thang == 6 || thang == 9 || thang == 11 ? 30 : 31));
    }
    tongNgay += iNgay;
    return tongNgay;
}

NgayThangNam NgayThangNam::operator+(int ngay) const {
    NgayThangNam temp = *this;
    temp.iNgay += ngay;
    temp.ChuanHoa();
    return temp;
}

NgayThangNam NgayThangNam::operator-(int ngay) const {
    NgayThangNam temp = *this;
    temp.iNgay -= ngay;
    temp.ChuanHoa();
    return temp;
}

NgayThangNam NgayThangNam::operator-(const NgayThangNam& nt) const {
    return NgayThangNam(iNam - nt.iNam, iThang - nt.iThang, iNgay - nt.iNgay);
}

// Toán tử ++ và --
NgayThangNam& NgayThangNam::operator++() {
    *this = *this + 1;
    return *this;
}

NgayThangNam NgayThangNam::operator++(int) {
    NgayThangNam temp = *this;
    *this = *this + 1;
    return temp;
}

NgayThangNam& NgayThangNam::operator--() {
    *this = *this - 1;
    return *this;
}

NgayThangNam NgayThangNam::operator--(int) {
    NgayThangNam temp = *this;
    *this = *this - 1;
    return temp;
}

// Toán tử so sánh
bool NgayThangNam::operator==(const NgayThangNam& nt) const {
    return iNgay == nt.iNgay && iThang == nt.iThang && iNam == nt.iNam;
}

bool NgayThangNam::operator!=(const NgayThangNam& nt) const {
    return !(*this == nt);
}

bool NgayThangNam::operator>=(const NgayThangNam& nt) const {
    return this->TinhNgay() >= nt.TinhNgay();
}

bool NgayThangNam::operator<=(const NgayThangNam& nt) const {
    return this->TinhNgay() <= nt.TinhNgay();
}

bool NgayThangNam::operator>(const NgayThangNam& nt) const {
    return this->TinhNgay() > nt.TinhNgay();
}

bool NgayThangNam::operator<(const NgayThangNam& nt) const {
    return this->TinhNgay() < nt.TinhNgay();
}

// Operator nhập ngày tháng năm
istream& operator>>(istream& in, NgayThangNam& nt) {
    cout << "Nhap ngay: ";
    in >> nt.iNgay;
    cout << "Nhap thang: ";
    in >> nt.iThang;
    cout << "Nhap nam: ";
    in >> nt.iNam;
    nt.ChuanHoa();
    return in;
}

// Operator xuất ngày tháng năm
ostream& operator<<(ostream& out, const NgayThangNam& nt) {
    out << nt.iNgay << "/" << nt.iThang << "/" << nt.iNam;
    return out;
}
