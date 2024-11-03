#include<bits/stdc++.h>
// main.cpp
#include "PhanSo.h"

using namespace std;

int main() {
    PhanSo a(3, 4), b(2, 5), c;
    cout << "Nhap phan so a: " << a << endl;
    cout << "Nhap phan so b: " << endl;
    cin >> b;
    c = a + b;
    cout << "a + b = " << c << endl;
    c = a - b;
    cout << "a - b = " << c << endl;
    c = a * b;
    cout << "a * b = " << c << endl;
    c = a / b;
    cout << "a / b = " << c << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
    return 0;
}
