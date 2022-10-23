#include <iostream>
#include <string>
#include <cmath>
#include <locale.h>
using namespace std;

int main(){

    int n;
    int toplam = 0;
    cout << "N degerini giriniz: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        toplam += i;
    }
    cout << "Sayıların ortalaması: " <<toplam / n;

    return 0;
}