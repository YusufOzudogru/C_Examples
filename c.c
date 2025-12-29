#include <stdio.h>

/*
int main()
{
    
    int a = 25, b = 6;
    printf("%d + %d = %d\n",a,b,a + b);
    printf("%d - %d = %d\n",a,b,a - b);
    printf("%d * %d = %d\n",a,b,a * b);
    printf("%d / %d = %d\n",a,b,a / b);
    printf("a mod b = %d\n",a,b,a % b);
    printf("a ++: %d\n", a ++);
    printf("a:%d\n",a);
    printf("++a : %d\n",++a);
    return 0;
    
}
*/
int main()
{
    int a = 25, b = 6, x = 5;
    printf("a +=3: %d\n",a+=3); // a = a + 3
    printf("a -=3: %d\n",a -= 3);
    printf("a *=3: %d\n",a *= 3);
    printf("a /= 5: %d\n",a /= 5);
    printf("a mod 3: %d\n",a %= 3);
    //printf("x &= 3\n",x &= 3);
    //printf("x|=3 : %d\n",x|=3);
    //printf("x^=3: %d\n", x ^= 3);
    //printf("x <<=3: %d",x <<= 3);
    return 0;
}
