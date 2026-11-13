#include <stdio.h>

int main(void)
{
    int a, b, c, x, y, z;
    int q, w, e;
    int t1;

   
    scanf("%d:%d:%d", &a, &b, &c);
 
    scanf("%d:%d:%d", &x, &y, &z);

   
   
    t1 = (x * 3600 + y * 60 + z) - (a * 3600 + b * 60 + c);

    
    if (t1 < 0)
    {
        t1 = -t1;
    }

    q = t1 / 3600;
    w = t1 % 3600 / 60; 
    e = t1 % 60;         

    
    printf("%d:%02d:%02d", q, w, e);

    return 0;
}
