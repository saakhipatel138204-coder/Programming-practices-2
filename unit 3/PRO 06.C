#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;
    int even=0,odd=0;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    arr = (int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            even+=arr[i];
        else
            odd+=arr[i];
    }

    printf("Sum of even numbers = %d\n",even);
    printf("Sum of odd numbers = %d",odd);

    free(arr);
}
