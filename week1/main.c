#include <stdio.h>

int main()
{   

    int n,a;
    printf("till how many numbers do you want to add:");
    scanf("%d",&n);
    a = addnum(n);
    printf("%d",a);    
    return 0;
}
int addnum(int n)
{
    int add[n],sum=0,i;
    for(i=0;i<=n;i++)
    { add[i]=i;
        sum+=add[i];
    }
    return sum;

}
