#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the three values");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a<b)
        {
            printf("%dis the largest",a);
        }
    }
    if(b>c)
    {
        printf("%d is largest",b);
    }
    else{
        printf("%dis the largest",c);
    } 
}
    
