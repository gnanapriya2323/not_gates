#include<stdio.h>
int main()
{
int a=3;
int b=4;
printf("stmt is a>b:%d\n",a>b);
int stmt=!(a>b);
printf("output of not gate is:%d",stmt);
return 0;
}