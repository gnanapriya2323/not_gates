#include<stdio.h>
int main()
{
int a=45;
int b=3;
printf("stmt is a>b:%d\n",a-b>b);
int stmt=!(a-b>b);
printf("output of not gate is:%d",stmt);
return 0;
}