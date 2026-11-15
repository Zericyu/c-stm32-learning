/*#include <stdio.h>
int main(){
    int h,i,j,k;

    scnaf("%d",&h);

    for(i=1;i<=h;i++){
        int n=i;
        
        if(i>(h+1)/2){
            n=h-i+1;
        }
        for(j=1;j<=(h+1)/2-n;j++){
            printf(" ");
        }
        for(k=1;k<=2*n-1;k++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}*/


#include <stdio.h>

int main()
{
    int h, i, j, k;

    scanf("%d", &h);

    for (i = 1; i <= h; i++)
    {
        int n = i;

        if (i > (h + 1) / 2)
        {
            n = h - i + 1;
        }

        for (j = 1; j <= (h + 1) / 2 - n; j++)
        {
            printf(" ");
        }

        for (k = 1; k <= 2 * n - 1; k++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
