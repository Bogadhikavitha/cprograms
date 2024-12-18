#include <stdio.h>
int main() {
    int n,rem,rev=0,temp;
    printf("enter the value of n");
    scanf("%d",&n);
    while(n>0)
    { temp=n;
        rem=n%10;
        rev=rev*10+rem*rem*rem;
        n=n/10;
        if(temp==rev)
        { printf("palindrome ");
        }
        else {
        printf("not palindrome");
        }
    }
}
