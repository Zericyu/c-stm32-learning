#include <stdio.h>
int main()
{
    int i,a,b,c;
     long long sum = 0;
    for(i=1;i<=3;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(i==1){
            sum+=a;
        }
        else if(i==2){
            sum+=b;
        }
        else{
            sum+=c;
        }
    }

    printf("%lld\n",sum);
    return 0;
}
