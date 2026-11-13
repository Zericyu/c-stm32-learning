#include <stdio.h>
#include <math.h>
int main(){
    int n,m;
    while(scanf("%d%d",&n,&m)!=EOF){
        double term=n;
        double sum=0.0;

        for(int i=1;i<=m;i++){
            sum+=term;
            term=sqrt(term);
        }
        printf("%.2f\n",sum);
    }
    return 0;
}