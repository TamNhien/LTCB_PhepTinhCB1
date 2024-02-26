#include <iostream>
using namespace std;

int tinhtong(int so1, int so2) { return so1 + so2; }
int tinhhieu(int so1, int so2) { return so1 - so2; }
int tinhtich(int so1, int so2) { return so1 * so2; }
float tinhthuong(float so1, float so2) { return so2 != 0 ? (float)so1 / so2 : 0; }

int main() {
    int so1, so2;
    cout << "Chuong trinh tinh Tong, Hieu, Tich, Thuong 2 so\n";
    cout << "Nhap so thu nhat: "; cin >> so1;
    cout << "Nhap so thu hai: "; cin >> so2;

    cout << so1 << " + " << so2 << " = " << tinhtong(so1, so2) << endl;
    cout << so1 << " - " << so2 << " = " << tinhhieu(so1, so2) << endl;
    cout << so1 << " * " << so2 << " = " << tinhtich(so1, so2) << endl;
    if (so2 != 0)
        cout << so1 << " / " << so2 << " = " << tinhthuong(so1, so2) << endl;
    else
        cout << "Khong the chia " << so1 << " cho 0\n";

    return 0;
}
