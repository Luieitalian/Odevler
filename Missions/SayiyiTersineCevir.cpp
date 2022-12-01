#include <iostream>
#include <string>
#include <cmath>
#include <locale.h>
using namespace std;

int main(){
    int rakSayisi = 0;
    int sayi;
    int sayi_0;
    int yeni_sayi = 0;
    cout << "Sayi giriniz: ";
    cin >> sayi;
    sayi_0 = sayi;

    if(sayi > 0){

        while (sayi_0 != 0){ 
            rakSayisi++;
            sayi_0 /=10;
        }

        for (int i =0; i < rakSayisi; i++)
        {
            if (sayi != 0)
            {
                yeni_sayi += sayi % 10 * pow(10,rakSayisi-i-1);  
                sayi/=10;
            }
        }
        cout << yeni_sayi;
        
    }
    else
        cout << "Pozitif bir deger giriniz...";




    return 0;
}