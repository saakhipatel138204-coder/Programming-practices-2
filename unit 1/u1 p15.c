#include<stdio.h>
int main()
{
    char str[100];
    int i=0,length;
    printf("enter a string");
    gets(str);
    while (str[i]!='10')
    {
        i++;

    }
    length=i;
    printf("the length of the string is :%d",length);
    return 0;
}
