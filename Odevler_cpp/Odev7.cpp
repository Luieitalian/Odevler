#include <iostream>
#include <string>
#include <cmath>
#include <locale.h>
using namespace std;

int main (){
    setlocale(LC_ALL,"Turkish");        
    
    double a;
    double b;
    double c;
    double kok1;
    double kok2;

    cout << "Denklemin baskatsayisini giriniz: "<<endl;
    cin >> a;

    cout << "Denklemin x'li terimin katsayisini giriniz: "<<endl;
    cin >> b;

    cout << "Denklemin sabit sayisini giriniz: "<<endl;
    cin >> c;

    kok1 = (-b + sqrt(pow(b,2)-4*a*c))/2*a;
    kok2 = (-b - sqrt(pow(b,2)-4*a*c))/2*a;

    cout <<"Kok 1: "<< kok1<< endl<< "Kok 2: " << kok2;
    
    return 0;
}