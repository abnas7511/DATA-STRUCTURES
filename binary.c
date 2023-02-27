#include<stdio.h>
int sort(int a[],int n)
{
    int temp,i,j;
    for(i=0;i<n;i++)
    {
     for(j=i+1;j<n;j++)
      {
         if(a[i]>a[j])
         {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }
      }
    }
    return a[i];
}
int search(int a[],int x,int n,int l,int r)
{
    int i,m;
    if (l>r)
     return -1;
    while(l<=r)
    {
        m=(l+r)/2;
        if(a[m]==x)
         return m;
        else if(a[m]>x)
         return search(a,x,n,l,m-1);
        else 
         return search(a,x,n,m+1,r);
    }
}
void main()
{
 int a[40],i,x,n,b;
 printf("enter the limit");
 scanf("%d",&n);
 printf("enter %d elements",n);
 for(i=0;i<n;i++)
 {
    scanf("%d",&a[i]);
 }
 sort(a,n);
 printf("sorted array is: ");
 for ( i = 0; i < n; i++)
 {
    printf("%d\t",a[i]);
 }
 printf("\n enter the no to be searched");
 scanf("%d",&x);
 b=search(a,x,n,0,n-1);
 if(b>0)
  printf("element found at %d",(b+1));
 else
  printf("not found");
}