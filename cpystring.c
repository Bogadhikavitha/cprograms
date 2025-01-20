#include<string.h>
#include<stdio.h>
int main()
{
    char str1[100],str2[200];
    printf(" enter the string1 ");
    scanf("%s",str1);
    printf("enter the string2");
    scanf("%s",str2);
    strcpy(str1,str2);
    printf("%s",str2);
}