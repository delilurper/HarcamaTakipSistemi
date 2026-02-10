#include <iostream>
using namespace std;

void harcamaEkle(double harcamalar[], int& harcamaSayisi)
{
    double yeniHarcama;

    cout << "Lutfen harcama ekleyiniz: ";
    cin >> yeniHarcama;

    if (yeniHarcama <= 0)
    {
        cout << "Gecersiz deger";
    }
    else if (harcamaSayisi >= 100)
    {
        cout << "Harcama listesi dolu!\n";
        return;
    }
    else
    {
        harcamalar[harcamaSayisi] = yeniHarcama;
        harcamaSayisi++;
    }
}

double toplamHarcama(const double harcamalar[], int harcamaSayisi) 
{
    if (harcamaSayisi == 0)
    {
        return 0;
    }

    double toplam = 0;
    
    for (int i = 0; i < harcamaSayisi; i++)
    {
        toplam = toplam + harcamalar[i];
    }
    return toplam;
}

double ortalamaHarcama(const double harcamalar[], int harcamaSayisi) 
{
    if (harcamaSayisi == 0)
    {
        return 0;
    }

    double toplam = 0;

    for (int i = 0; i < harcamaSayisi; i++)
    {
        toplam = toplam + harcamalar[i];
    }
    
    return toplam / harcamaSayisi;
    
}

double enYuksekHarcama(const double harcamalar[], int harcamaSayisi) 
{
    if (harcamaSayisi == 0)
    {
        return 0;
    }

    double max = harcamalar[0];
    
    for (int i = 1; i < harcamaSayisi; i++)
    {
        
        if (max < harcamalar[i])
        {
            max = harcamalar[i];
        }
    }
    return max;
}

double enDusukHarcama(const double harcamalar[], int harcamaSayisi)
{
    if (harcamaSayisi == 0)
    {
        return 0;
    }

    double min = harcamalar[0];

    for (int i = 1; i < harcamaSayisi; i++)
    {

        if (min > harcamalar[i])
        {
            min = harcamalar[i];
        }
    }
    return min;
}

void ozetRapor(const double harcamalar[], int harcamaSayisi)
{
    if (harcamaSayisi == 0)
    {
        cout << "Henuz harcama girilmedi.\n";
    }
    else
    {
        cout << "\n--- OZET RAPOR ---\n";
        cout << "Toplam harcama: " << toplamHarcama(harcamalar, harcamaSayisi) << " TL\n" << endl;
        cout << "Ortalama harcama: " << ortalamaHarcama(harcamalar, harcamaSayisi) << " TL\n" << endl;
        cout << "En yuksek harcama: " << enYuksekHarcama(harcamalar, harcamaSayisi) << " TL\n" << endl;
        cout << "En dusuk harcama: " << enDusukHarcama(harcamalar, harcamaSayisi) << " TL\n" << endl;

    }
}

int main()
{
    const int MAX = 100;
    double harcamalar[MAX];
    int harcamaSayisi = 0;
    int secim;

    do {
        cout << "\n--- HARCAMA TAKIP SISTEMI ---\n";
        cout << "1- Harcama ekle\n";
        cout << "2- Toplam harcamayi goster\n";
        cout << "3- Ortalama harcamayi goster\n";
        cout << "4- En yuksek harcamayi goster\n";
        cout << "5- En dusuk harcamayi goster\n";
        cout << "6- Ozet rapor\n";
        cout << "0- Cikis\n";
        cout << "Seciminiz: ";
        cin >> secim;

        switch (secim)
        {
        case 1:
            harcamaEkle(harcamalar, harcamaSayisi);
            break;

        case 2:
            cout << "Toplam harcama: "
                << toplamHarcama(harcamalar, harcamaSayisi) << " TL\n";
            break;

        case 3:
            cout << "Ortalama harcama: "
                << ortalamaHarcama(harcamalar, harcamaSayisi) << " TL\n";
            break;

        case 4:
            cout << "En yuksek harcama: "
                << enYuksekHarcama(harcamalar, harcamaSayisi) << " TL\n";
            break;

        case 5:
            cout << "En dusuk harcama: "
                << enDusukHarcama(harcamalar, harcamaSayisi) << " TL\n";
            break;

        case 6:
            ozetRapor(harcamalar, harcamaSayisi);
            break;

        case 0:
            cout << "Cikis yapiliyor...\n";
            break;

        default:
            cout << "Gecersiz secim!\n";
        }

    } while (secim != 0);

    return 0;
}
