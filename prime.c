#include <stdio.h>
int main()
{ int i,n,count=0;
printf("enter the value of n");
scanf("%d",&n);
count=0;
for(i=1; i<=n; ++i)
{ 
    if(n%i==0)
{ 
    count++;
}
}
if(count==2)
{
    printf("prime");
}
else
{ printf("not prime");
}
}
