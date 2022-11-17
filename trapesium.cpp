#include <iostream>

using namespace std;

int main(){

    double trapesium, a, b, t;

    cout << "Masukan a=";
    cin >> a;

    cout << "Masukan b=";
    cin >> b;

    cout << "Masukan t =";
    cin >> t;

    trapesium = 0.5 * (a * b) * t;

    cout << "Hasil =" << trapesium;

    return 0;
}
