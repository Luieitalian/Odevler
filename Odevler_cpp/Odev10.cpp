#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <locale.h>
using namespace std;


struct KarmasikSayi{

    float reelKisim;
    float imajinerKisim;
} karmasikSayi;

void Koordinat (float, float);

int main(){

    cout << "Karmasik sayinin reel kismini giriniz : ";
    cin >> karmasikSayi.reelKisim;
    cout << "Karmasik sayinin imajiner kismini giriniz : ";
    cin >> karmasikSayi.imajinerKisim;

    Koordinat(karmasikSayi.reelKisim, karmasikSayi.imajinerKisim);


    return 0;
}

void Koordinat (float reel, float imajiner){

    float r = sqrt(pow(reel,2) + pow(imajiner,2));

    float aci = atan(imajiner/reel); // arctan fonksiyonu...

    cout << setprecision(3) << "K ("<<r<<" ,"<<aci<<")"<<endl;
}