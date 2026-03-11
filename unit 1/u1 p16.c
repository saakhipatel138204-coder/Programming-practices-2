#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];str[100];
    printf("enter first string:");
    gets(str1);
    printf("enter second string:");
    gets(str2);
    if(strcmp(str1,str2)==0)
        printf("both string are equal");
    else
        printf("both strings are not eqaul");
    return 0;
}
