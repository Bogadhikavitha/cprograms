#include<stdio.h>
void main()
{
    char ch;
    printf("enter the ch");
    scanf("%c",&ch);
    if(ch=='a'|| ch=='e'|| ch=='i'||ch=='o'||ch=='u')
    { 
        printf( " given ch is vowel");
    }
    else
    {
        printf("not vowel");
    }
}

