#include <iostream>
#include <locale.h>
#include <fstream>
#include "yemekclass.h"

int main()
{
    setlocale(LC_ALL, "Turkish.UTF8");
    Urun urun;
    urun.addMalzeme();
    
    return 0;
}