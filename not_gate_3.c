#include<stdio.h>
int main()
{
int a,b;
printf("the value of a:");
scanf("%d",&a);
printf("the value of b:");
scanf("%d",&b);

printf("stmt is a>b:%d\n",a>b);
int stmt=!(a>b);
printf("output of not gate is:%d",stmt);
return 0;
}