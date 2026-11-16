/*#include <stdio.h>
int main(){
    int a,b,c;

    while(scanf("%d %d %d",&a,&b,&c)!=EOF){
        int Max=a;
        int Min=b;
        if(a<b){
            Max=b;
            Min=a;
        }
        if(c<Min){
            Min=c;
        }
        if(a<c){
            Max=c;
        }
        printf("%d %d",Max,Min);
    }
    return 0;
}

#include <stdio.h>

int main(){
    int a,b,c;

    while(scanf("%d %d %d\n",&a,&b,&c)!=EOF){
        int Max=a;
        int Min=a;

        if(b>Max){
            Max=b;
        }
        if(b<Min){
            Min=b;
        }
        if(c>Max){
            Max=c;
        }
        if(c<Min){
            Min=c;
        }

        printf("%d %d\n",Min,Max);
    }

    return 0;
}*/

#include <stdio.h>

int Min(int a,int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}

int Max(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
