#include <stdio.h>
#include <math.h>
int main()
{/* örnek 1
    int x,i;
    printf("bir x değeri giriniz:\n");
    scanf("%d",&x);
    if(x < 100 && x > 1)
    {
        for(i=0;i<100;i+=2)
        {
            if(x > i)
            {
                printf("%d\n",i);
            }
        }
    }
    else
    {
        printf("sayı 1 ile 100 arasında değil");
    }
*/
/* örnek 2 
    int x;
    printf("bir x değeri giriniz:\n");
    scanf("%d",&x);

    if(x<0)
    {
        printf("%d = negatif bir sayı");
    }
    else if(x > 1)
    {
        printf("x pozitif bir sayıdır");
    }
    else
    {
        printf("x = 0 dır");
    }
*/
/* örnek 4
    int Sayı;
    printf("bir sayı giriniz\n");
    scanf("%d",&Sayı);

    if(Sayı % 3 == 0)
    {
        printf("fizz");
    }
    else if(Sayı % 5 == 0 && Sayı % 3 == 0)
    {
        printf("fizzbuzz");
    }
    else
    {
        printf("buzz");
    }
*/
/* örnek 5
    int a,b,i;
    printf("2 sayı giriniz:\n");
    scanf("%d%d",&a,&b);
    if(a < b || a > b )
    {
        for(i = a;i < a || i < b;i+=2)
        {
            printf("%d\n",i);
        }
        
    }
*/
/* örnek 7
    int x = 1;
    while(x < 50)
    {

        if(x % 7 == 0)
        {
            x++;
        }
        printf("%d\n",x);
        x++;        
    }
*/
/* örnek 8
    int i,sayi,BuyukSayi,KucukSayi;
    BuyukSayi = sayi;
    KucukSayi = sayi;
    for(i = 0;i < 10;i++)
    {
        printf("bir sayı giriniz\n");
        scanf("%d",&sayi);

        if(sayi<BuyukSayi)
        {
            printf("%d",sayi);
        }
        if(sayi > BuyukSayi)
            BuyukSayi = sayi;
        if(sayi < KucukSayi)
            KucukSayi = sayi;
    }

    printf("\nEn büyük sayı: %d\n", BuyukSayi);
    printf("En küçük sayı: %d\n", KucukSayi);
    */

/* 2. part örnek 1
    int yil,ay;
    printf("bir yil bir de ay değeri giriniz\n");
    scanf("%d%d",&yil,&ay);
    
    switch(ay)
    {
        case 1:
            printf("Ocak ayi 31 gündür");
            break;
        case 2:
            if(yil % 4 == 0)
            {
                printf("Şubat ayı 29 gündür");
            }
            break;
            printf("Şubat ayi 28 gündür");
            break;
        case 3:
            printf("Mart ayi 31 gündür");
            break;
        case 4:
            printf("Nisan ayi 30 gündür");
            break;
        case 5:
            printf("Mayıs ayi 31 gündür");
            break;
        case 6:
            printf("Haziran ayi 30 gündür");
            break;
        case 7:
            printf("Temmuz ayi 31 gündür");
            break;
        case 8:
            printf("Ağustos ayi 31 gündür");
            break;
        case 9:
            printf("Eylül ayi 30 gündür");
            break;
        case 10:
            printf("Ekim ayi 31 gündür");
            break;
        case 11:
            printf("Kasım ayi 30 gündür");
            break;
        case 12:
            printf("Aralık ayi 31 gündür");
            break;
        default:
            printf("Hatali ay numarasi girdiniz! (1-12 arasi olmalı)\n");
            break;
    }
*/
/* 2. part örnek 2
    int R_Daire,Taban,Yükseklik,Köşe,alan;
    printf("Dairenin yarıçapını,Üçgenin tabanını, yükseklik değerini ve Karenin bi köşesini giriniz\n");
    scanf("%d%d%d%d",&R_Daire,&Taban,&Yükseklik,&Köşe);

    printf("hesaplamak istediğiniz alanı seçiniz:\n1-Dairenin Alanını\n2-Üçgenin Alanını\n3-Karenin Alanını\n");
    scanf("%d",&alan);

    switch(alan)
    {
    case 1:
        printf("%d",R_Daire*R_Daire*3);
        break;
    case 2:
        printf("%d",(Taban*Yükseklik)/2);
        break;
    case 3:
        printf("%d",Köşe*Köşe);
        break;
    default:
        printf("alan seçmediniz: Çıkış!!!");    
        break;
    }
*/

    return 0;
}