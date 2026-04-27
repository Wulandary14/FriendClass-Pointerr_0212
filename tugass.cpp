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
        