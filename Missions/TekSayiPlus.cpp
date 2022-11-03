#include <iostream>
#include <string>
#include <cmath>
#include <locale.h>
using namespace std;

int main(){

    int tekSayi=0;
    int rakSum=0;
    int tekSayac=0;
    int rakSayisi=0;
    int sayi;

    cout << "Bir tam sayi giriniz: ";
    cin >> sayi;

    if (sayi > 0){
        while (sayi != 0)
        {
            if( (sayi%10) % 2 == 1){
                rakSum += sayi%10;
                tekSayi = tekSayi + (sayi%10 * pow(10,tekSayac));
                tekSayac++;
                rakSayisi++;
                sayi /= 10;
            }
            else{
                rakSayisi++;
                rakSum += sayi%10;
                sayi /= 10;
            }
        }
        cout << "Tek sayi : "<<tekSayi<<endl;
        cout << "Rakam sayisi: "<<rakSayisi<<endl;
        cout << "Tek rakam sayisi : "<<tekSayac<<endl;
        cout << "Rakam toplamlari: "<<rakSum<<endl;
    }
    else
        cout << "Lutfen 0'dan buyuk bir sayi giriniz...";
    return 0;
}