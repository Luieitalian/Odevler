#ifndef __YEMEKCLASSH__
#define __YEMEKCLASSH__
#include <string>
struct Tarih {
    int gun;
    int ay;
    int yil;
};

class Urun
{
private:
    std::string UrunKodu;
    std::string urunAdi;
    Tarih uretimTarihi;
    Tarih sonKullanmaTarihi;
    float kaloriGram;
    int stokAdet;
    float fiyatKilo;
    
public:
    static int yemekCesitiSayaci;
    static int UrunKoduSayaci;
    void addUrun();
    void removeUrun();
    void Menu();
    void addMalzeme();
    void yemekCesitiSayaciArtir();
    void yemekCesitiSayaciDusur();
    void UrunKoduSayaciArtir();
    int getYemekCesitiSayaci();
    int UrunKoduLineBul(std::string arananKod);
};

#endif