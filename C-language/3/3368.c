/*#include <stdio.h>
int main(){
    int T,a1,b1,c1;
    char a,b,c;
    double avg;
    scanf("%d",&T);
    for(int i=1;i<=T;i++){
        scanf(" %c %c %c",&a,&b,&c);
        if(a>='0' && a<='9'){
            a1=a-'0';
        }
        else{
            a1=a;
        }
        if(b>='0' && b<='9'){
            b1=b-'0';
        }
        else{
            b1=b;
        }
        if(c>='0' && c<='9'){
            c1=c-'0';
        }
        else{
            c1=c;
        }

        avg=(a1+b1+c1)/3.0;
        printf("%.2f\n",avg);
    }
    return 0;
}*/
#include <stdio.h>
int main(){
    int T,a1,b1,c1;
    char a,b,c;
    double avg;
    scanf("%d",&T);
    for(int i=1;i<=T;i++){
        scanf(" %c %c %c",&a,&b,&c);
        if(a>='0' && a<='9'){
            a1=a-'0';
        }
        else{
            a1=a;
        }
        if(b>='0' && b<='9'){
            b1=b-'0';
        }
        else{
            b1=b;
        }
        if(c>='0' && c<='9'){
            c1=c-'0';
        }
        else{
            c1=c;
        }
        avg=(a1+b1+c1)/3.0;
        printf("%.2f\n",avg);
    }
    return 0;
}
