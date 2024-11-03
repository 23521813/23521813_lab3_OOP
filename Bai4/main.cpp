#include<bits/stdc++.h>
#include "NgayThangNam.h"

using namespace std;

int main() {
    NgayThangNam nt1, nt2;

    cout << "Nhap ngay thang nam thu nhat:" << endl;
    cin >> nt1;
    cout << "Nhap ngay thang nam thu hai:" << endl;
    cin >> nt2;

    NgayThangNam sum = nt1 + 18;  // Thêm 10 ngày vào nt1
    NgayThangNam diff = nt1 - 18;  // Giảm 5 ngày từ nt1

    cout << "Ngay thang nam thu nhat: " << nt1 << endl;
    cout << "Ngay thang nam thu hai: " << nt2 << endl;
    cout << "Tong (them 10 ngay): " << sum << endl;
    cout << "Hieu (giam 5 ngay): " << diff << endl;

    cout << "\nTang nt1 len 1 ngay: " << ++nt1 << endl;
    cout << "Giam nt2 xuong 1 ngay: " << --nt2 << endl;

    if (nt1 == nt2) {
        cout << "Hai ngay thang nam bang nhau.\n";
    } else {
        cout << "Hai ngay thang nam khong bang nhau.\n";
    }
    return 0;
}
