#include<stdio.h>
void sort(int a[],int n)
{
    int temp,i,j;
    for(i=1;i<n;i++)
    {
        j=i;
        while (j>0 && a[j]<a[j-1])
        {
            temp=a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
            j--;
        }
    }
}
void main()
{
 int n,a[50],i;
 printf("enter limit");
 scanf("%d",&n);
 printf("enter elements");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 sort(a,n);
 printf("the sorted array is: \n");
 for(i=0;i<n;i++)
  printf("/n%d",a[i]);
}