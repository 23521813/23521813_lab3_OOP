#include<bits/stdc++.h>

using namespace std;

class NgayThangNam {
private:
    int iNgay;   // Ngày
    int iThang;  // Tháng
    int iNam;    // Năm

    // Hàm kiểm tra năm nhuận
    bool NamNhuan(int nam) const;

    // Hàm chuẩn hóa ngày tháng năm
    void ChuanHoa();
public:
    // Constructors
    NgayThangNam();
    NgayThangNam(int Nam, int Thang, int Ngay);

    int TinhNgay() const; // Tính tổng số ngày tính từ 01/01/0000

    NgayThangNam operator+(int ngay) const;
    NgayThangNam operator-(int ngay) const;
    NgayThangNam operator-(const NgayThangNam& nt) const;

    NgayThangNam& operator++();
    NgayThangNam operator++(int);
    NgayThangNam& operator--();
    NgayThangNam operator--(int);

    bool operator==(const NgayThangNam& nt) const;
    bool operator!=(const NgayThangNam& nt) const;
    bool operator>=(const NgayThangNam& nt) const;
    bool operator<=(const NgayThangNam& nt) const;
    bool operator>(const NgayThangNam& nt) const;
    bool operator<(const NgayThangNam& nt) const;

    friend istream& operator>>(istream& in, NgayThangNam& nt);
    friend ostream& operator<<(ostream& out, const NgayThangNam& nt);
};

