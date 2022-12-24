#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include "yemekclass.h"

int Urun::yemekCesitiSayaci = 20;
int Urun::UrunKoduSayaci = 21;

std::string getInput()
{

    std::string str;
    getline(std::cin, str);

    return str;
}

std::string MenuSecenek()
{

    std::string secenek;

    do
    {
        std::cout << "Lütfen Menüden Bir Değer Giriniz! : ";
        std::cin >> secenek;

    } while (!(secenek == "1" || secenek == "2" || secenek == "3" || secenek == "4" || secenek == "5"));

    return secenek;
}
std::string DevamMi()
{

    std::string devamMi;

    do
    {
        std::cout << "Devam etmek istiyor musunuz? e/h : ";
        std::cin >> devamMi;

    } while (!(devamMi == "e" || devamMi == "h"));

    return devamMi;
}
void Urun::addMalzeme(){

    std::ofstream DosyaYaz("malzeme.txt",std::ios::app);
    std::string girilenMalzeme;
    std::string devamMi;
    DosyaYaz << std::endl << UrunKoduSayaci << " ";

    do
    {
        std::cout << "Malzeme Giriniz : "; std::cin >> girilenMalzeme;
        girilenMalzeme[0] = toupper(girilenMalzeme[0]);
        DosyaYaz << girilenMalzeme << " ";


        devamMi = DevamMi();
    } while (devamMi != "h");   // Malzeme Girmekten Vazgeçilinceye Kadar Malzeme Listesine Malzeme Ekler
    
    
    


}
void Urun::Menu()
{

    std::cout << "-----------------------------------------------------------------------" << std::endl;
    std::cout << "1. Rapor Al" << std::right << std::setw(50) << "Gir 1" << std::endl
              << std::endl;
    std::cout << "2. Yemek Çeşiti Ekle" << std::right << std::setw(50) << "Gir 2" << std::endl
              << std::endl;
    std::cout << "3. Yemek Çeşiti Sil" << std::right << std::setw(50) << "Gir 3" << std::endl
              << std::endl;
    std::cout << "4. Yemek Çeşiti Güncelle" << std::right << std::setw(50) << "Gir 4" << std::endl
              << std::endl;
    std::cout << "5. Yemek Çeşiti" << std::right << std::setw(50) << "Gir 5" << std::endl
              << std::endl;
    std::cout << "-----------------------------------------------------------------------" << std::endl;

    std::string secenek = MenuSecenek();

    switch (stoi(secenek))
    {
    case 1:

        break;
    case 2:
        addUrun();
        break;
    default:
        break;
    }
}
void Urun::removeUrun(){



}
void Urun::addUrun()
{
    std::ofstream DosyaYaz("yemekcesit.txt", std::ios::app);

    std::string devamMi;
    do
    {
        std::cout << "Ürün Adı Giriniz : ";
        urunAdi = getInput();
        urunAdi[0] = toupper(urunAdi[0]);
        std::cout << std::endl
                  << "Üretim Tarihi Gününü Giriniz : ";
        uretimTarihi.gun = stoi(getInput());
        std::cout << std::endl
                  << "Üretim Tarihi Ayını Giriniz : ";
        uretimTarihi.ay = stoi(getInput());
        std::cout << std::endl
                  << "Üretim Tarihi Yılını Giriniz : ";
        uretimTarihi.yil = stoi(getInput());
        std::cout << std::endl
                  << "Son Kullanma Tarihi Gününü Giriniz : ";
        sonKullanmaTarihi.gun = stoi(getInput());
        std::cout << std::endl
                  << "Son Kullanma Tarihi Ayını Giriniz : ";
        sonKullanmaTarihi.ay = stoi(getInput());
        std::cout << std::endl
                  << "Son Kullanma Tarihi Yılını Giriniz : ";
        sonKullanmaTarihi.yil = stoi(getInput());
        std::cout << std::endl
                  << "Kalori Gramını Giriniz : ";
        kaloriGram = stod(getInput());
        std::cout << std::endl
                  << "Stok Miktarını Giriniz : ";
        stokAdet = stoi(getInput());
        std::cout << std::endl
                  << "Fiyat Kilo Giriniz : ";
        fiyatKilo = stod(getInput());

        DosyaYaz << std::endl << UrunKoduSayaci << " " << urunAdi << " " << uretimTarihi.gun << " " << uretimTarihi.ay << " " << uretimTarihi.yil << " " << sonKullanmaTarihi.gun << " " << sonKullanmaTarihi.ay << " " << sonKullanmaTarihi.yil << " " << kaloriGram << " " << stokAdet << " " << fiyatKilo << std::endl;

        addMalzeme();
        UrunKoduSayaciArtir();
        yemekCesitiSayaciArtir();

        devamMi = DevamMi();

    } while (devamMi != "h");
}
void Urun::yemekCesitiSayaciDusur()
{

    yemekCesitiSayaci -= 1;
}
void Urun::yemekCesitiSayaciArtir()
{

    yemekCesitiSayaci += 1;
}
int Urun::getYemekCesitiSayaci()
{
    return yemekCesitiSayaci;
}

int Urun::UrunKoduLineBul(std::string arananKod)
{
    std::string okunanKod = "";
    std::string geciciDeger;
    std::ifstream DosyaOku;
    DosyaOku.open("proje\\yemekcesitii.txt", std::ios::in);
    do
    {
        DosyaOku >> okunanKod;
        if (arananKod != okunanKod)
        {                                   // alt satıra geçmek için
            getline(DosyaOku, geciciDeger); // alt satıra geçmek için
        }                                   // alt satıra geçmek için
    } while (arananKod != okunanKod);       // UrunKodu bulmak için bir döngü
    return stoi(okunanKod);
}

void Urun::UrunKoduSayaciArtir()
{
    Urun::UrunKoduSayaci += 1;
}