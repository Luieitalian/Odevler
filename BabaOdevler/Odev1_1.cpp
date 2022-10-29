#include <iostream>
#include <string>
#include <cmath>
#include <locale.h>
using namespace std;

int sayac;
int basamakSayisi;
int sayi;
int sayac2;

int basamakSayisiHesapla(int x)
{
    if(x >= 10)
       basamakSayisiHesapla(x / 10);

    int basamakk = x % 10;

    if (basamakk % 2 == 1)
        sayac++;
    return sayac;
}

void basamak(int x, int y)
{
    if(x >= 10)
       basamak(x / 10, y-sayac2);

    int basamakk = x % 10;

    if (basamakk % 2 == 1){
        sayac2++;
        sayi = sayi + basamakk * pow(10, y-sayac2);
    }
}

int main (){

    sayi = 0;
    sayac = 0;
    sayac2 = 0;

    int a;
    cout << "Lutfen sayi giriniz: ";
    cin >> a;

    int basamakSayisi = basamakSayisiHesapla(a);
    basamak(a,basamakSayisi);

    cout << "Sayi : " << sayi << endl;
    system("pause");

    return 0;
}