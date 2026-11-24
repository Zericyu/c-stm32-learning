//第一题：
#include <stdio.h>
int main(){
    int a[100];
    for(int i = 0;i<10;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<5;i++){
        int x=a[i];
        a[i]=a[9-i];
        a[9-i]=x;
    }
    for(int i=0;i<10;i++){
        if(i>0){
            printf(" ");
        }
        printf("%d",a[i]);
    }
     printf("\n");

  
    return 0;
}

//第二题
#include <stdio.h>
int main(){
 
    long long n;
    int a[10];
    int count=0;

    scanf("%lld",&n);

    while(n>0){
        a[count]=n%10;
        count++;
        n/=10;
    }
    for(int i=count-1;i>=0;i--){
        printf("%d",a[i]);
        if(i>0){
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}


//第三题
#include <stdio.h>
int main(){
    int a[6];
    int n;
    scanf("%d",&n);
    int count=0;
    while(n>0){
        a[count]=n%10;
        count++;
        n/=10;
    }
    printf("%d\n",count);

    for(int i=count-1;i>=0;i--){
        printf("%d",a[i]);
        if(i>0){
            printf(" ");
        }
    }
    printf("\n");

    for(int i=0;i<count;i++){
        printf("%d",a[i]);
        if(i<count-1){
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}


//第四题
#include <stdio.h>
int main(){
    int a[10];
    int n;

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int min=0, max=0;
   
    for(int i=0;i<n;i++){
        if(a[i]<a[min]){
            min=i;
        }
        if(a[i]>a[max]){
            max=i;
        }

    }

     int t=a[0];
        a[0]=a[min];
        a[min]=t;

        if(max==0){
            max=min;
        }

        t=a[n-1];
        a[n-1]=a[max];
        a[max]=t;

        for(int i=0;i<n;i++){
            if(i>0){
                printf(" ");
            }
            printf("%d",a[i]);
        }

        printf("\n");
        return 0;
}


//第五题
#include <stdio.h>
int main(){
    int n;
    int a[100];

while(scanf("%d",&n)==1){
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int id=0;
    int max=a[0];

    for(int i=0;i<n;i++){
        if(a[i]>max){
            id=i;
            max=a[i];
        }
    }
    printf("%d %d\n",max,id+1);
 }
     return 0;
}

//第四题简单写法：

#include <stdio.h>

int main(void)
{
    int a[10], n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // 找最小值的位置，换到开头
    int min = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[min])
            min = i;
    }

    int t = a[0];
    a[0] = a[min];
    a[min] = t;

    // 在交换后的数组里找最大值的位置，换到末尾
    int max = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[max])
            max = i;
    }

    t = a[n - 1];
    a[n - 1] = a[max];
    a[max] = t;

    for (int i = 0; i < n; i++)
    {
        if (i > 0)
            printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}