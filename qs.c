#include<stdio.h>
void swap(int a[],int i,int j)
{
  int temp;
  temp=a[i];
  a[i]=a[j];
  a[j]=temp;
}
int partition(int a[],int i,int j)
{
    int t;
    t=i;
    while(i<j)
    {
        while(a[i]<=a[t])
        {
            i++;
        }
        while(a[j]>a[t])
        {
            j--;
        }
        if(i<j)
        {
            swap(a,i,j);
        }
    }
    swap(a,t,j);
    return j;

}

void qs(int a[],int l,int r)
{
    int j;
    if(l<r)
    {
        j=partition(a,l,r);
        qs(a,l,j-1);
        qs(a,j+1,r);

    }
}
void main()
{
    int i,n,a[25];
    printf("enter limit");
    scanf("%d",&n);
    printf("enter %d elements",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    qs(a,0,n-1);
    printf("sorted array is \n");
    for ( i = 0; i < n; i++)
    {
        printf("\t%d",a[i]);
    }  
}