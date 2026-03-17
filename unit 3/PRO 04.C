#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,sum=0;
    float avg;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    arr = (int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum += arr[i];
    }

    avg = (float)sum/n;

    printf("Sum = %d\nAverage = %f",sum,avg);

    free(arr);
}
