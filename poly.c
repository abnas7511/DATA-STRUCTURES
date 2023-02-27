#include<stdio.h>
void createpoly(int poly[],int d)
{
    int i;
    printf("enter the coefficient for \n");
    for(i=d;i>=0;i--)
    {
        printf("degree %d element",i);
        scanf("%d",poly[i]);
    }
}
void display(int poly[],int d)
{
  int i;
  for(i=d;i>=0;i--)
  {
    if(i!=d && poly[i]>0)
      printf("+");
    printf("%dx%d",poly[i],i);
  }
}
void main()
{
    int poly1[50],d1,i,poly2[50],d2,polyres[50],dres;
    printf("enter the degree of first polunomial");
    scanf("%d",&d1);
    createpoly(poly1,d1);
    printf("enter the degree of 2nd polynomial");
    scanf("%d",d2);
    createpoly(poly2,d2);
    if(d1>d2)
    {
        dres=d1;
    }
    else
    {
        dres=d2;
    }
    for(i=0;i<dres;i++)
    {
        polyres[i]=poly1[i]+poly2[i];
    }
    printf("the first poly is\n");
    display(poly1,d1);
    printf("second poly is\n");
    display(poly2,d2);
    printf("sum polynomial is\n");
    display(polyres,dres);
}