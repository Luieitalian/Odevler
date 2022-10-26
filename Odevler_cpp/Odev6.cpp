#include <iostream>
#include <string>
#include <cmath>
#include <locale.h>
using namespace std;

int main (){
    setlocale (LC_ALL,"Turkish");

    double sayi;
    double toplam;
    int sayac = 0;
    cout << "Donguyu bitirmek icin 0 giriniz..."<<endl;

    while(true)
    {
        cout << "Sayi giriniz: ";
        cin >> sayi;
        if (sayi == 0)
            break;
        toplam += sayi;
        sayac++;
    }
    cout << "Sayilarin ortalamasi: "<< toplam / sayac; 



    return 0;
}
