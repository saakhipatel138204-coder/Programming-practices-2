#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i = 0,lenwith=0,lenwithout=0;
    printf("enter a string:");
    gets(str);
    //without using strlen()
    while(str[i]!='0')
    {
        lenwithout++;
        i++;
    }
    //using string()
    lenwith=strlen(str);
    printf("length using string function=%d\n",lenwith);
    printf("length without using string function=%d\n",lenwithout);
    return 0;

}
