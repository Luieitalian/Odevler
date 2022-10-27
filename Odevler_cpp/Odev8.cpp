#include <iostream>
#include <string>
#include <cmath>
#include <locale.h>
using namespace std;

int main (){
    setlocale (LC_ALL,"Turkish");

    cout << (pow(4,3)/3 + pow(4,2) + 5*4);



    return 0;
}