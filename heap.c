#include<stdio.h>
void swap(int a[],int i,int j)
{
    int temp;
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
void heapify(int a[],int n,int i)
{
    int large=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n && a[left]>a[large])
    {
        large=left;
    }
    if(right<n && a[right]>a[large])
    {
        large=right;
    }
    if(large!=i)
    {
        swap(a,i,large);
        heapify(a,n,large);
    }
}
void sort(int a[],int n)
{
    int i;
    for(i= n/2-1;i>=0;i--)
        heapify(a,n,i);
    for(i=n-1;i>=0;i--)
    {
        swap(a,0,i);
        heapify(a,i,0);
    }
}
void main()
{
    int i,n,a[25];
    printf("enter limit");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,n);
    printf("sorted array is: \n");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
}