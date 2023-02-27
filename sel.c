#include<stdio.h>
void swap(int a[],int n,int i,int k)
{
  int temp;
  temp=a[i];
  a[i]=a[k];
  a[k]=temp;
}
void sort(int a[],int n)
{
 int i,j,k;
 for (i=0;i<n-1;i++)
 {
    k=i;
    for(j=i+1;j<n;j++)
    {
     if(a[j]<a[k])
     {
        k=j;
        swap(a,n,i,k);
     }
    }
 }
}
void main()
{
    int n,i,a[50];
    printf("enter limit");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    sort(a,n);
    printf("sorted array is: \n");
    for(i=0;i<n;i++)
    {
     printf("\n%d",a[i]);
    }
}