#include <iostream>
#include <string>
#include <cmath>
#include <locale.h>
using namespace std;

int main (){

    int sayi;
    bool asal;

    cout << "Donguden cikmak icin 0 giriniz..."<<endl;
    while (true){

        cout << "Sayi giriniz: ";
        cin >> sayi;

        for (int i = 2; i < sayi; i++){
    
            if (sayi == 0)
                break;
            else if (sayi % i == 0){
                asal = false;
                break;
            }
            else if (sayi % i != 0){
                asal = true;
            }
            else
                break;
        }
        if (sayi == 0)
            break;
        
        if (asal == true){
            cout << "Sayi asaldir! "<<endl;
        }
        else {
            cout << "Sayi asal degildir! "<<endl;  
        }
    }

    return 0;
}