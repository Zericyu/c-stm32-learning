#include <stdio.h>
int main(){
    int m,n,day=0;
    int maxhour=8;
    for(int i=1;i<=7;i++){
        scanf("%d %d",&m,&n);
        int sum=m+n;
        if(sum>maxhour){
            maxhour = sum;
            day=i;
        }
    }

    printf("%d\n",day);
    return 0;
}