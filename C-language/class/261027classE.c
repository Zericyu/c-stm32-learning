#include <stdio.h>
 int main()
 {
    int weight,pay=8;
    char a;

    scanf("%d",&weight);
    scanf(" %c",&a);

    if(weight>1000)
    
    {
        pay+=(weight-1000)/500*4;
        
        if ((weight-1000)%500!=0)
        {
            pay+=4;
        }
    }

    if(a=='y')
    
    {
        pay+=5;
    }

    printf("%d",pay);

    return 0;


}