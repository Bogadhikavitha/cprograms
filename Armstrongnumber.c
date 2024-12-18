#include <stdio.h>
int main() {
    int n,rem,sum=0,temp;
    printf("enter the value of n");
    scanf("%d",&n);
    while(n>0)
    { temp=n;
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
        if(temp==sum)
        { printf("armstrong number ");
        }
        else {
        printf("not armstrong number ");
        }
    }
}
