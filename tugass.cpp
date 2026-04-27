#include <iostream>
#include <cmath>
using namespace std;

class LayangLayang {
private:
    int d1, d2;
    int a, b;

public:
    void inputData() {
        cout << "\n=== Layang-Layang ===" << endl;
        cout << "Masukkan diagonal 1 : ";
        cin >> d1;
        cout << "Masukkan diagonal 2 : ";
        cin >> d2;
        cout << "Masukkan sisi a : ";
        cin >> a;
        cout << "Masukkan sisi b : ";
        cin >> b;
    }

    double hitungLuas() {
        return 0.5 * d1 * d2;
    }

    void tampilkanLuas() {
        cout << "Luas Layang-Layang : " << hitungLuas() << endl;
    }

    friend int kelilingLayang(LayangLayang l);
};

int kelilingLayang(LayangLayang l) {
    return 2 * (l.a + l.b);
}

class BelahKetupat {
private:
    int d1, d2;
    int sisi;

public:
    void inputData() {
        cout << "\n=== Belah Ketupat ===" << endl;
        cout << "Masukkan diagonal 1 : ";
        cin >> d1;
        cout << "Masukkan diagonal 2 : ";
        cin >> d2;
        cout << "Masukkan sisi : ";
        cin >> sisi;
    }

    