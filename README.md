# C_Examples
if ve switch örnekleri
#include <stdio.h>

int main()
{
    /*
    int a,b;
    printf("a ve b değerlerini giriniz:\n");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("%d > %d ",a,b);
    }
    else
    {
        printf("%d < %d ",a,b);
    }
*/
/*
    int a;
    printf("a değerini giriniz\n");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("%d çift bir sayıdır",a);
    }
    else{
        printf("%d bir tek sayıdır",a);
    }
*/
/*
    int a;
    printf("bir a değeri giriniz\n");
    scanf("%d",&a);
    if(a > 100)
    {
        printf("%d > 100",a);
    }
    else if(a < 1)
    {
        printf("%d < 1",a);
    }
    else
    {
        printf("%d <= 100",a);
    }
*/

/*
    int a;
    printf("bir a değeri giriniz\n");
    scanf("%d",&a);

    (a > 100) ? printf("%d > 100",a) : printf("%d <= 100",a);

    else if(a < 1)
    {
        printf("%d < 1",a);
    }
    else
    {
        printf("%d <= 100",a);
    }
*/

/*
    int x,y;
    printf("x ve y değerleri giriniz\n");
    scanf("%d%d",&x,&y);
    (x > y) ? printf("x = %d",x) : printf("y = %d",y);
*/
/*
    int a;
    printf("bir a değeri giriniz\n");
    scanf("%d",&a);
    switch(a > 50)
    {
        case 1:
        printf("%d > 50",a);
        break;
        case 0:
        printf("%d < 50",a);
        break;
        
        default:
        printf("a = 50");
        
    }
*/
/*
    int day;
    printf("1 ile 7 arasında 1 değer giriniz\n");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
            printf("pazartesi");
            break;
        case 2:
            printf("salı");
            break;
        case 3:
        printf("çarşamba");
            break;
        case 4:
        printf("perşembe");
            break;
        case 5:
            printf("cuma");
            break;
        case 6:
            printf("cumartesi");
            break;
        case 7:
            printf("pazar");
            break;
        default:
            printf("1-7 arasında sayı seçermisiniz?");

    }
*/
/*
    int Sayi1,Sayi2,Sayi3;
    printf("3 tane sayı giriniz\n");
    scanf("%d%d%d",&Sayi1,&Sayi2,&Sayi3);
    if(Sayi1 > Sayi2)
    {
        printf("%d en büyük sayıdır",Sayi1);
    }
    else if(Sayi2 > Sayi3)
    {
        printf("%d en büyük sayıdır",Sayi2);
    }
    else
    {
        printf("%d en büyük sayıdır",Sayi3);
    }
*/
/*
    int not;
    printf("aldığınız notu giriniz\n");
    scanf("%d",&not);
    if(not >= 80 && not <100)
    {
        printf("A not aldınız");
    }
    else if(not >= 60 && not < 80)
    {
        printf("B not aldınız");
    }
        else if(not >= 40 && not < 60)
    {
        printf("C not aldınız");
    }
        else if(not >= 20 && not < 40)
    {
        printf("D not aldınız");
    }
    else
    {
        printf("F not aldınız");
    }
*/


    return 0;
}
