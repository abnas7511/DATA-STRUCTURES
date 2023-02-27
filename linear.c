#include<stdio.h>
int linear(int a[],int x,int n)
{
 int i;
 for(i=0;i<n;i++)
 {
    if(a[i]==x)
    {
         return i;
    }
 }
 return -1;
}
void main()
{
  int i,a[15],x,n,c;
  printf("enter the limit");
  scanf("%d",&n);
  printf("enter elements");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("enter th elements to be searched");
  scanf("%d",&x);
  c=linear(a,x,n);
  if(c>0)
  {
    printf("the element is found at the pos %d",(c+1));
  }
  else
    printf("not found");
}