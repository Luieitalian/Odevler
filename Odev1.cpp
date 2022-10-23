#include <iostream>
#include <string>
#include <cmath>
#include <locale.h>
using namespace std;

enum gunler { pzt, sal, crs, per, cum, cmt, paz};

int main(){
    setlocale(LC_ALL, "Turkish");

    enum gunler gun;
    int secim;

    cout << "Rakam giriniz: ";
    cin >> secim;

    gun = static_cast<gunler>(secim);

    switch(gun){
        case pzt:
            cout << "Pazartesi";
            break;
        case sal:
            cout << "Sali";
            break;
        case crs:
            cout << "Çarşamba";
            break;
        case per:
            cout << "Perşembe";
            break;
        case cum:
            cout << "Cuma";
            break;
        case cmt:
            cout << "Cumartesi";
            break;
        case paz:
            cout << "Pazar";
            break;
        default:
            cout << "Hata!";
            break;
    }
    
    return 0;
}