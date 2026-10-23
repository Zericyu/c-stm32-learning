#include <stdio.h>
 int main ()
 {
    int a,b,c,d,e;
    double s;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    s=c*b+c*a/2.0-d*e;

    printf("%.2f",s);
    return 0;
    
 }