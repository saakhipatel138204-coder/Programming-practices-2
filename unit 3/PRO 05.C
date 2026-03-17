#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,j,flag,sum=0;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    arr = (int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<n;i++)
    {
        flag=1;
        for(j=2;j<arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1 && arr[i]>1)
            sum+=arr[i];
    }

    printf("Sum of prime numbers = %d",sum);

    free(arr);
}
