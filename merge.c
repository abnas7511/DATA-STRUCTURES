#include<stdio.h>
void merge(int a[],int l,int m,int r)
{
  int i,x,y,b[25],k;
  i=l;
  x=l;
  y=m+1;
  while( (x<=m) && (y<=r))
  {
    if(a[x]<a[y])
    {
        b[i]=a[x];
        x++;
    }
    else
    {
        b[i]=a[y];
        y++;
    }
    i++;
  }
  if(x<=m)
  {
    for(k=x;k<=m;k++)
    {
        b[i]=a[k];
        i++;
    }
  }
  else
  {
    for(k=y;k<=r;k++)
    {
        b[i]=a[k];
        i++;
    }
  }
  for(i=l;i<=r;i++)
  {
    a[i]=b[i];
  }

}

void sort(int a[],int l,int r)
{
  int m;
  if(l<r)
  {
   m=(l+r)/2;
   sort(a,l,m);
   sort(a,m+1,r);
   merge(a,l,m,r);
  }
}

void main()
{
    int a[25],i,n;
    printf("enter limit");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,0,n-1);
    printf("sorted array is: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}