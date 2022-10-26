#include <iostream>
#include <string>
#include <cmath>
#include <locale.h>
using namespace std;

int main (){

    setlocale(LC_ALL,"Turkish");
    
    char islemOp;
    double sayi1;
    double sayi2;
    double sonuc;
    char tamamDevam;

    while (true){
        cout << "Tamam mi devam mi (t/d)";
        cin >> tamamDevam;

    if (tamamDevam == 'd'){

        cout << "Birinci sayiyi giriniz: ";
        cin >> sayi1;
        cout << "Ikinci sayiyi giriniz: ";
        cin >> sayi2;
        cout << "Yapilacak islemi giriniz (+,-,x,/): ";
        cin >> islemOp;

        switch (islemOp)
        {
        case '+':
            sonuc = sayi1 + sayi2;
            cout << "Sonuc : "<<sonuc<<endl;
            break;
        case '-':
            sonuc = sayi1 - sayi2;
            cout << "Sonuc : "<<sonuc<<endl;
            break;
        case 'x':
            sonuc = sayi1 * sayi2;
            cout << "Sonuc : "<<sonuc<<endl;
            break;
        case '/':
            sonuc = sayi1 / sayi2;
            cout << "Sonuc : "<<sonuc<<endl;
            break;
        default:
            cout<< "Lutfen gecerli bir deger giriniz!"<<endl;
            break;
        }
    }
    else if ( tamamDevam == 't' )
        break;
    else
        cout << "Lutfen gecerli bir deger giriniz!"<<endl;
    }

    return 0;
}