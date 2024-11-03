#include<bits/stdc++.h>
#include "SoPhuc.h"

using namespace std;

int main() {
    SoPhuc sp1, sp2;
    cout << "Nhap so phuc thu nhat:" << endl;
    cin >> sp1;
    cout << "Nhap so phuc thu hai:" << endl;
    cin >> sp2;
    SoPhuc sum = sp1 + sp2;
    SoPhuc diff = sp1 - sp2;
    SoPhuc prod = sp1 * sp2;
    SoPhuc quot = sp1 / sp2;
    cout << "\nSo phuc thu nhat: " << sp1 << endl;
    cout << "So phuc thu hai: " << sp2 << endl;
    cout << "\nTong: " << sum << endl;
    cout << "Hieu: " << diff << endl;
    cout << "Tich: " << prod << endl;
    cout << "Thuong: " << quot << endl;
    if (sp1 == sp2) {
        cout << "Hai so phuc bang nhau." << endl;
    } else {
        cout << "Hai so phuc khong bang nhau." << endl;
    }
    return 0;
}
