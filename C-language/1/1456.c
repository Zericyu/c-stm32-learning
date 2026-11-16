#include <stdio.h>
int main(){
    int t,n;
    double h;
    double H;
    scanf("%d",&t);
    double sum=0;
    for(int i=0;i<t;i++){
        scanf("%lf %d",&h,&n);
        sum=h;
        H = h / 2.0;
        for(int j=1;j<n;j++){
            sum+=H*2;
            H/=2.0;
        }
        printf("%.2f %.2f\n",sum,H);
    }
    return 0;
}