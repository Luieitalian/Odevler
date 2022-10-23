#include <iostream>
#include <string>
#include <cmath>
#include <locale.h>
using namespace std;

int main(){
   
    // 1-10 arasındaki çift sayıların continue ifadesi kullanılarak ekrana yazılması 

    for (int i = 1; i < 10; i++)
    {
        if (i % 2 != 0)
            continue;

        cout << i << endl;
    }
    
    return 0;
}