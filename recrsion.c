#include<stdio.h>
int add(int n)
{
int m;
if(n!=0)
m=n+add(n-1);
return m;
}
main()
{
int a,x;
printf("enter any number:\n");
scanf("%d",&x);
a=add(x);
printf("%d",a);  
}

