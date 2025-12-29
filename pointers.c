#include <stdio.h>
#include <stddef.h>

int main()
{
    /*
    int age = 18;
    int *ptr = &age;
    printf("%d\n",age);
    printf("%p\n",&age);
    printf("%p\n",ptr);

    int y = 5;
    int *yPtr;
    yPtr = &y;
    printf("%d\n",*yPtr);
    
    int a = 7;
    int *aPtr = &a;

    printf("%p %p\n",&a,aPtr);
    printf("%d %d\n",a,*aPtr);
    printf("%p %p\n",&*aPtr,*&aPtr);
    
    char s[] = "Bugun HaVa CoK BuluTlu 8 Aralık 2025";
    ConvertToUpperCase(s);
    printf("%s\n",s);
    return 0;
}
void ConvertToUpperCase(char *x)
{
    while (*x != '\0')
    {
        *x = toupper(*x);
        x++;
    }
}
*/

//const anahtar sözcüğünün bildirimdeki yerine bağlı olarak sabit göstericilerin anlamı değişmektedir.sabit göstericiler ilişkin 3 farklı gösterim var 1 - gösterdikleri yer bu türk gösterimlerde adresin gösterdiği yer değiştirilemez içeriği değişebilir
//2. kullanım yeri kendisi sabit olan göstericiler bunların gösterdikleri yer değiştirilebilir ancak içerikleri değiştirilmez.
//3. kullanım hem kendisi hem gösterdiği sabit olan göstericiler bunlarda ne göstericinin adresi nede sayı değişemez.