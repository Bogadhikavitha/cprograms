#include <stdio.h>
int main()
{
    int a,b;
    char op;
    printf("enter the a,b values and operator");
    scanf("%d%d %c",&a,&b,&op);
    switch(op)
{
    case'+': printf("the addition is %d",a+b);
    break;
    case'-': printf("the subtraction is %d", a-b);
    break;
    case'*': printf("the multiplication is %d",a*b);
    break;
    case'%': printf("the remainder is %d",a%b);
    break;
    case'/': printf("the divison is %d",a/b);
    break;
    default: printf("invalid output");
    break;
}
}
