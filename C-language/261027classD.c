#include <stdio.h>
 int main()
 {
    int x,y,z,max,mid,min;

    scanf("%d,%d,%d",&x,&y,&z);
    max=x;

    if(y<max && z<max)
    {
        if(y>z)
        {
            mid=y;
            min=z;
        }
        else
        {
            mid=z;
            min=y;
        }
    }

    else if (y >= x && y >= z) {
        max = y;
        if (x > z) {
            mid = x;
            min = z;
        } else {
            mid = z;
            min = x;
        }
    } else {
        max = z;
        if (x > y) {
            mid = x;
            min = y;
        } else {
            mid = y;
            min = x;
        }
    }

    printf("%d %d %d",min,mid,max);
    return 0;
    
 }