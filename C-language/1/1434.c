#include <stdio.h>
#include <math.h>
int main(){
    int i;
    int drops;
     double D,VUL;
    
     while(scanf("%lf %lf",&VUL,&D)!=EOF){
        int sum=0;
        int time=0;
        drops=(int)(VUL/D);
        if(drops*D<VUL){
        drops++;
        }
        for(i=1;sum<drops;i++){
            int current = drops - sum;
            if(current>i){
                current=i;
            }

        sum+=current;
        time+=current;

            if(sum<drops){
                time++;
            }
        }
        printf("%d\n",time);
    }
    return 0;
}