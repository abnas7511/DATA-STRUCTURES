#include<stdio.h>
void sort(int a[],int n)
{
  int temp,i,j;
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(a[j]>a[j+1])
      {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }
}
void main()
{
  int a[50],i,n;
  printf("enter limit");
  scanf("%d",&n);
  printf("enter %d elements",n);
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
  sort(a,n);
  printf("the sorted array is: ");
  for(i=0;i<n;i++)
  {
   printf("\t%d",a[i]);
  }
}