#include <stdio.h>
int main()
{
    int a,b;
    char x;

    scanf("%d%d",&a,&b);
    scanf(" %c", &x);

    switch (x)
    {
    case '+': printf("%d",a+b); break;
    case '-': printf("%d",a-b); break;
    case '*': printf("%d",a*b); break;        
    case '/': 
    {
        if(b==0)
        {
            printf("Divided by zero!");
        }
        else
        {
            printf("%d",a/b);
        }
    }
    break;
        
    
    default: printf("Invalid operator!");
    }

    return 0;
}