#include <iostream>
#include <string>
#include <cmath>
#include <locale.h>
using namespace std;



int main (){

    int en;
    int boy;

    cout << "En giriniz: ";
    cin >> en;
    cout << "Boy giriniz: ";
    cin >> boy;


    if( en <=20 && boy <=20 ){

        for (int i =1; i <= boy ;i++){

            if (i==1){
                for (int i = 1; i <= en; i++)
                {
                    cout <<"* ";
                }
                cout << endl;
            }
            else if (i == boy){
                for (int i = 1; i <= en; i++)
                {
                    cout << "* ";
                }
                cout << endl;
            }
            else{
                cout << "* ";
                for (int i = 1; i <= en-2; i++)
                {
                    cout << "  ";
                }
                cout << "*" << endl;
            }
        }
        cout << endl;

        for (int i =1; i <= en ;i++){

            if (i==1){
                for (int i = 1; i <= boy; i++)
                {
                    cout <<"* ";
                }
                cout << endl;
            }
            else if (i == en){
                for (int i = 1; i <= boy; i++)
                {
                    cout << "* ";
                }
                cout << endl;
            }
            else{
                cout << "* ";
                for (int i = 1; i <= boy-2; i++)
                {
                    cout << "  ";
                }
                cout << "*" << endl;
            }
        }
    }
    else
        cout << "Lütfen geçerli bir deger giriniz...";


    return 0;
}