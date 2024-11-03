#include<bits/stdc++.h>
#include "ThoiGian.h"

using namespace std;

int main() {
    ThoiGian tg1, tg2;

    cout << "Nhap thoi gian thu nhat:" << endl;
    cin >> tg1;
    cout << "Nhap thoi gian thu hai:" << endl;
    cin >> tg2;

    ThoiGian sum = tg1 + tg2;
    ThoiGian diff = tg1 - tg2;

    cout << "\nThoi gian thu nhat: " << tg1 << endl;
    cout << "Thoi gian thu hai: " << tg2 << endl;
    cout << "\nTong hai thoi gian: " << sum << endl;
    cout << "Hieu hai thoi gian: " << diff << endl;

    cout << "\nTang tg1 len 1 giay: " << ++tg1 << endl;
    cout << "Giam tg2 xuong 1 giay: " << --tg2 << endl;

    if (tg1 == tg2) {
        cout << "Hai thoi gian bang nhau." << endl;
    } else {
        cout << "Hai thoi gian khong bang nhau." << endl;
    }
    return 0;
}
