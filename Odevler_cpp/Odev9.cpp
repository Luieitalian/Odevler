#include <iostream>
#include <locale.h>
using namespace std;
/*
    BU DOSYADA GIRILEN SAYININ 2'NIN KATI OLUP OLMADIĞINI KONTROL EDIP
    GERIYE BOOLEAN DEĞER DONDUREN FONKSIYON HAZIRLANMISTIR...
*/

bool tam(unsigned int a){

    unsigned int sayi = 1;
    int sayac = 0;
    do
    {
        sayac++;
        if(sayac == 31)
            return false;

        sayi = sayi*2;
        
    } while (sayi != a);
    
    return true;
}

int main (){
    setlocale(LC_ALL,"Turkish");
    
    unsigned inputSayi;

    cout << "Bir sayi giriniz : ";
    cin >> inputSayi;

    cout << boolalpha // true-false şeklinde olması için 
    << tam(inputSayi);

    return 0;
}

