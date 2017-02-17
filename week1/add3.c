#include<stdio.h>
int add(int a, int b, int c){
      int q;
      q= a+b+c;
      return q;      }
 int main()
{
int x,y,z;
printf("Enter three numbers:");
scanf("%d%d%d",&x,&y,&z);
int p = add(x,y,z);
printf("%d\n",p);
}                 
