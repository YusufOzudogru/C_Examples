
#include <stdio.h>
int main()
{

    int x = 5,y = 3;
    printf("%d\n",x>y);
    printf("%d\n",x<y);
    
    int x;
    double y;
    float z;
    char t;
    printf("%lu\n",sizeof(x));//unsigned long
    printf("%lu\n",sizeof(y));
    printf("%lu\n",sizeof(z)); 
    printf("%lu\n",sizeof(t));
     
    float x = 3.5;
    printf("%.lf\n",x);
    printf("%.1lf\n",x);
    
    float x;
    x = (float) 5/2;
    printf("%.2lf",x);

    return 0;

}



