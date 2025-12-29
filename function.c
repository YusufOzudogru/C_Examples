#include <stdio.h>
#include <math.h>
/*
int topla(int x,int y);
float topla_float(float a,float b,float c);

int topla(int x,int y)
{
    return x + y;
}
float topla_float(float a,float b,float c)
{
    return a + b + c; 
}

int main()
{
    printf("%d\n",topla(5,4));
    printf("%d\n",topla_float(1.3,2.7,3.9));
}
*/
/*


void Kare()
{
    int sayı;
    printf("kaç sayı girmek istersiniz:\n");
    scanf("%d",&sayı);

    for(int i = 0;i < sayı;i++)
    {
        printf("%d^2 = %d\n",i,i * i);
    }
}
int main()
{
    Kare();
    return 0;
}
*/
/*
void YasHesapla()
{
    int Yas,Dogum;
    printf("Doğum yilinizi giriniz:\n");
    scanf("%d",&Dogum);
    if(Dogum < 2025)
    {
        printf("yaşiniz = %d",2025 - Dogum);
    }
    else
    {
        printf("Böyle bir doğum yili yok!!!");
    }

}
int main()
{
    YasHesapla();
    return 0;
}
*/
/*
alanHesap()
{
    int cisim;
    printf("hangi cismin alanini hesaplamak istersiniz 1 = kare \t 2 = daire \t 3 = üçgen\n");
    scanf("%d",&cisim);
    if(cisim == 1)
    { 
        int köse;
        printf("karenin bir köşesini giriniz\n");
        scanf("%d",&köse); 
        printf("karenin alanı = %d",köse*köse);
    }
    else if(cisim == 2)
    {

        int yarıCap;    
        printf("yari çapi giriniz\n");
        scanf("%d",&yarıCap);
        printf("daire alanı = %d",yarıCap * yarıCap * 3);
    }
    else
    {
        int taban,yükseklik;
        printf("taban ve yüksekliği giriniz\n");
        scanf("%d%d",&taban,&yükseklik);
        printf("%d",(taban*yükseklik)/2);
    }
}  
int main()
{
    alanHesap();
    return 0;
}
*/
/*
float calculateTicketPrice(int type)
{
    printf("lütfen bilet türünüzü giriniz:");
    scanf("%d",&type);
    if(type == 1)
    {
        return 50.f;
    }
    else
    {
        return 80.0f;
    }
}
float applyDayDiscount(float price,int day)
{
    printf("lütfen hangi gün bilet almak istiyorsunuz seçiniz");
    scanf("%d",&day);
    if((day == 1)||(day == 3)||(day == 5))
    {
        price = price * 0,80;
    }
    return price;
}
float applyAmountIncrease(float price,int count,int i)
{
    printf("kaç bilet almak istiyorsunuz?");
    scanf("%d",&count);
    i = 5;
    while(count >= i)
    {
        i++;
        price += 10;
    }
    printf("%d",price);
}
int main()
{
    float calculateTicketPrice();
    float applyAmountIncrease();
    return 0;
}
*/
/*
void dakikaCevir(int totalMinutes,int hours,int minutes)
{
    hours = totalMinutes / 60;
    minutes = totalMinutes % 60;
    printf("time %d saat : %d dakika\n",hours,minutes);
}

int main()
{
    int dk,h,m;
    printf("enter your cooking time as minutes\n");
    scanf("%d",&dk);

    dakikaCevir(dk,h,m);

    return 0;
}
*/
int main()
{
    int n;
    printf("Dizi kaç adet elemanlı olsun: ");
    scanf("%d", &n);
    int toplam;

    int array[n];

    for(int i = 0;i < n;i++)
    {
        scanf("%d",&array[i]);
        printf("array[%d] = %d\n",i,array[i]);
    }

    for (int i = 0; i < n; i++) 
    {
        printf("%d ", array[i]);
    }
        printf("\n");
    for(int i = 0;i < n;i++)
    {
        toplam += array[i];
    }
    printf("%d",toplam);
    return 0;
}