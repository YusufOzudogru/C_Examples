#include <stdio.h>
#define size 10

int main()
{
/* örnek 1
    int a[10],i,number;

    printf("enter a number:\n");
    scanf("%d",&number);

    for(i = 0; i < size;i++)
    {
        a[i] = number;
    }
    for(i = 0; i < size;i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }
*/
/* örnek 2
    char Name[] = {'Y','u','s','u','f','\0'};
    int i;

    for(i = 0;i < 6;i++)
    {
        printf("Name[%d] = %c\n",i,Name[i]);
    }
*/
/*
    int a[100],i,cift = 2;

    for(i = 0; i < 100;i++)
    {
        
        printf("a[%d] = %d\n",i,cift);
        cift += 2;
        
    }
*/
/*
    int a[3][3] = {{4,8,12},{51,73,54},{40,60,71}};
    int boyut = sizeof(a) / sizeof(a[0]);
    for(int i = 0;i < boyut;i++)
    {
        for(int j = 0; j < boyut;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
*/
    return 0;
}