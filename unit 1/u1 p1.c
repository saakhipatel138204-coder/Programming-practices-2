#include<stdio.h>
int main()
{
    int a[100];
    int n,i;
        printf("enter number of element:");
        scanf("%d",&n);
        printf("enter %delement:\n",n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);

        }
        printf("you have entered:\n");
        for(i=0;i<n;i++)
        {
            printf("%d",a[i]);

        }
        return 0;
}
