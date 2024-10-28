#include<stdio.h>
int main()
{
 char ch;
 printf("enter the character");
    scanf("%s",&ch);
    switch(ch)
    {
        case'a':
        case'e':
        case'i':
        case'o':
        case'u':printf("%c is a vowel",ch);
        break;
        default:printf("%c is a consonant");
     break;
    }
}
