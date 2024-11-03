#include<bits/stdc++.h>

using namespace std;

class SoPhuc {
private:
    double dThuc; // Phần thực
    double dAo;   // Phần ảo

public:
    // Constructor
    SoPhuc();
    SoPhuc(double thuc, double ao);

    SoPhuc operator+(const SoPhuc& sp) const;
    SoPhuc operator-(const SoPhuc& sp) const;
    SoPhuc operator*(const SoPhuc& sp) const;
    SoPhuc operator/(const SoPhuc& sp) const;
    bool operator==(const SoPhuc& sp) const;
    bool operator!=(const SoPhuc& sp) const;

    friend istream& operator>>(istream& in, SoPhuc& sp);
    friend ostream& operator<<(ostream& out, const SoPhuc& sp);
};
