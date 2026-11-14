#include <stdio.h>
int main(){
    int T;
    scanf("%d",&T);
      for (int i = 0; i < T; i++){
        int d,t;
        scanf("%d%d",&d,&t);
        double old=10.0+1.0;
        double new=11.0;

         if (d > 10)
        {
            old += 7 * 2.0 + (d - 10) * 3.0;
            new += 7 * 2.5 + (d - 10) * 3.75;
        }
        else if (d > 3)
        {
            old += (d - 3) * 2.0;
            new += (d - 3) * 2.5;
        }

        old += t * (2.0 / 5);
        new += t * (2.5 / 4);

        int oldPrice = (int)(old + 0.5);
        int newPrice = (int)(new + 0.5);

        printf("%d\n", newPrice - oldPrice);
      }

   return 0;
}