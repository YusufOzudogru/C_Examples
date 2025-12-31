#include <stdio.h>
#include <stdlib.h>

void siparisAlma(char *urunler[], float fiyatlar[], int stok[], int secim, int adet, float *totalFiyat);
void dosyaKayıt(float totalFiyat, char *urunler[], int secim,int adet);
void MüdürGiris(int gercekSifre,float *totalFiyat,int *stok);
void girisEkranı(char *urunler[], float fiyatlar[], int stok[], int secim, int adet, float *totalFiyat,int panel,int gercekSifre);

void girisEkranı(char *urunler[], float fiyatlar[], int stok[], int secim, int adet, float *totalFiyat,int panel,int gercekSifre)
{
    //Menü ve yönetici girişi ekranı
    if (panel == 1)
    {
        siparisAlma(urunler, fiyatlar, stok, secim, adet, totalFiyat);
    }
    else
    {
        MüdürGiris(gercekSifre,totalFiyat,stok);
    }
}

void MüdürGiris(int gercekSifre,float *totalFiyat,int *stok)
{
    int girilenSifre;
    printf("Şirketimizin Yönetici Moduna Hoşgeldiniz. Lütfen Şifrenizi Giriniz:\n");
    scanf("%d", &girilenSifre);
    if(girilenSifre == gercekSifre)
    {
        printf("Şifre Doğru!");
        int islemSecim,StokSecim,StokEkleme;
        printf("Stok güncellemek için 1'i total kazancı görmek için 2'yi tuşlayınız:\n");
        scanf("%d",&islemSecim);
        // 1. switch seçmek istediğiniz işlem türü için
        switch(islemSecim)
        {
            case 1:
                printf("Eklemek istediğiniz stok miktarını giriniz:\n");
                scanf("%d",&StokEkleme);
                printf("Hangi ürünün stok miktarını güncellemek istersiniz? (1-7)\n");
                scanf("%d",&StokSecim);
                // 2. switch stokları güncellemek için
                    switch(StokSecim)
                    {
                        case 1:
                            stok[StokSecim-1] += StokEkleme;
                            printf("Aktif stok miktarı: %d\n",stok[0]);
                            break;
                        case 2:
                            stok[StokSecim-1] += StokEkleme;
                            printf("Aktif stok miktarı: %d\n",stok[1]);
                            break;
                        case 3:
                            stok[StokSecim-1] += StokEkleme;
                            printf("Aktif stok miktarı: %d\n",stok[2]);
                            break;
                        case 4:
                            stok[StokSecim-1] += StokEkleme;
                            printf("Aktif stok miktarı: %d\n",stok[3]);
                            break;
                        case 5:
                            stok[StokSecim-1] += StokEkleme;
                            printf("Aktif stok miktarı: %d\n",stok[4]);
                            break;
                        case 6:
                            stok[StokSecim-1] += StokEkleme;
                            printf("Aktif stok miktarı: %d\n",stok[5]);
                            break;
                        case 7:
                            stok[StokSecim-1] += StokEkleme;
                            printf("Aktif stok miktarı: %d\n",stok[6]);
                            break;
                        default:
                            printf("Geçersiz Seçim böyle bir ürünümüz yoktur!\n");
                            break;
                    }
                
                break;
            case 2:
                printf("Total kazanç = %.2f\n",*totalFiyat);
                break;
            default:
                printf("Geçersiz Seçim! program kapatılıyor...\n");
                break;
        }
    }
    else
    {
        printf("Hatalı Şifre! siz yetkili değilsiniz programdan çıkılıyor!.\n");
    }
}

void siparisAlma(char *urunler[], float fiyatlar[], int stok[], int secim, int adet, float *totalFiyat)
{
    while(1)
    {
        //Menü ekranı
        printf("----RESTORANT MENÜ----\n");
        for(int i = 0; i < 7; i++)
        {
            printf("%d. %s -> Fiyat: %.2f -> Stok: %d\n", i + 1, urunler[i], fiyatlar[i], stok[i]);
        }

    printf("sipariş vermek istiyorsanız menüden seçim yapınız, "
           "hesabı istemek için 1-7 dışında bir tuşa basınız:\n");
    scanf("%d", &secim);

        if(secim < 1 || secim > 7)
        {
            printf("toplam fiyat: %.2f tl Afiyet olsun, Bizi seçtiğiniz için teşekür ederiz...\n", *totalFiyat);
            break;
        }

        printf("kaç adet %s almak istersiniz?\n", urunler[secim - 1]);
        scanf("%d", &adet);
        if(adet > stok[secim - 1])
        {
            printf("Yeterli stok yok! Mevcut stok: %d\n", stok[secim - 1]);
        }
        else
        {
            *totalFiyat += fiyatlar[secim - 1] * adet;
            stok[secim - 1] -= adet;
            printf("%d adet %s siparişiniz alındı.\n", adet, urunler[secim - 1]);
            dosyaKayıt(*totalFiyat, urunler, secim, adet);
        }
    }
}

//dosyaya kayıt fonksiyonu
void dosyaKayıt(float totalFiyat, char *urunler[], int secim, int adet)
{
    FILE *dosya = fopen("siparisler.txt", "a");
    if(dosya == NULL)
    {
        printf("Dosya açılamadı!\n");
        exit(1);
    }
    else
    {
        fprintf(dosya, "seçilen ürün: %s ,adet = %d , Toplam Fiyat: %.2f\n",urunler[secim-1],adet,totalFiyat);
    }
    fclose(dosya);
}


int main(void)
{
    char *urunler[7] = {"Pizza", "Mexican Burger","Mantı", "Penna Arabiata",
    "Çoban Salata", "Profiterol","Limonata"};
    float fiyatlar[7] = {220.0, 300.0, 240.0, 150.0, 80.0, 200.0, 50.0};
    int stok[7] = {30, 25, 37, 40, 37, 22, 77};
    int secim = 0, adet = 0, gercekSifre = 1453;
    float totalFiyat = 0;
    int panel;
    printf("=============================\n");
    printf("Yusuf'un Cafesine Hoşgeldiniz\n");
    printf("=============================\n");
    printf("sipariş vermek için 1'i,yönetici moduna geçmek için herhangi bir tuşa basınız\n");
    scanf("%d",&panel);

    girisEkranı(urunler, fiyatlar, stok, secim, adet, &totalFiyat, panel, gercekSifre);
    dosyaKayıt(totalFiyat, urunler, secim, adet);
    return 0;
}
