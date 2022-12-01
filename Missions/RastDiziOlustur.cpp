#include <iostream>
#include <cmath>
#include <string>
#include <time.h>
using namespace std;


// A-Z rastgele dizi oluştur, dizinin her elemanı farklı olsun, sonra a-z sıralı şekilde yaz

int main(){

    srand(time(0));

    int rastDizi[26];

    char list[] {'a','b','c','d','e','f','g','h','i','j','k',
    'l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    
    char newList[26];

    int rastgelesayi;

    rastgelesayi = rand() % 26;
    rastDizi[0] = rastgelesayi;
    newList[0] = list[rastgelesayi];
    bool rastgeleMi;


    for (int i = 1; i < size(list); i++)
    {
        do
        {

            rastgelesayi = rand() % 26;
            for (int j = 0; j < i; j++)
            {
                if (rastgelesayi == rastDizi[j]){
                    rastgeleMi = false;
                    break;
                }
                else{
                    rastgeleMi = true;
                }
            }
        } while (rastgeleMi == false);

        rastDizi[i] = rastgelesayi;
        newList[i] = list[rastgelesayi];
    }  

    system("pause");
    return 0;
}