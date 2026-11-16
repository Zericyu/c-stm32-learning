#include <stdio.h>
int main(){
    int jia,yi,N;
    int a,x,b,y;
    int m=0,n=0;

    scanf("%d %d",&jia,&yi);
    scanf("%d",&N);

    for(int i=1;i<=N;i++){
        scanf("%d %d %d %d",&a,&x,&b,&y);

       int sum = a + b;

if (x == sum && y != sum)
{
    m++; 
}
else if (y == sum && x != sum)
{
    n++; 
}

if (m > jia)
{
    printf("A\n%d\n", n);
    break;
}
if (n > yi)
{
    printf("B\n%d\n", m);
    break;
}
    }

    return 0;
}