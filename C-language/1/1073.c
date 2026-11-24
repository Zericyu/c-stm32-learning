#include <stdio.h>
int main(){
    int f[1000],g[1000];
    int m,n;

    scanf("%d %d",&m,&n);

    for(int i=0;i<m;i++){
        scanf("%d",&f[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&g[i]);
    }

    int j=0;
    int count=0;

    for(int i=0;i<m;i++){
        while(j<n && g[j]<f[i]){
            j++;
        }
        count+=j;
    }

    printf("%d",count);

    return 0;
}