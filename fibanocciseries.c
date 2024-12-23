#include <stdio.h>
int main()
{int a=0,b=1,c;
int i,n;
printf("enter the value of n");
scanf("%d",&n);
for(i=2;i<n; i++)
{ c=a+b;
printf("%d",c);
a=b;
b=c;
}
}
