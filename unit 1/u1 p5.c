#include<stdio.h>
int main()
{
    int n,i;
    int a[100],b[100];
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("enter %d elements:\n",n);
    for(i=0;i<n;i++)
{

    scanf("%d",&a[i]);
}
  for(i=0;i<n;i++)
  {
    b[i]=a[i];
  }
  printf("element of second array after copying:\n");
  for(i=0;i<n;i++)
  {
      printf("%d",b[i]);
  }
  return 0;
}

