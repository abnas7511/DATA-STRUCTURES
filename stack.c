#include<stdio.h>
#include<stdlib.h>
int stack[100],size=3,top=0;
void push(int element)
{
  if(top==size)
  {
    printf("stack full");
  }
  else
  {
    stack[top]=element;
    top=top+1;
  }
}

int pop()
{
    int element;
    if(top==0)
    {
        printf("stack is empty");
    }
    else
    {
        top=top-1;
        element=stack[top];
        return element;
    }
}

int peak()
{
    if(top==0)
     printf("stack is empty");
    else
    {
        printf("\n%d\n",stack[top-1]);
    }
}

void display()
{
    int i;
    if(top==0)
     printf("stack is empty");
    else
    {
      for(i=top-1;i>=0;i--)
      {
         printf("\n%d\n",stack[i]);
      }
    }
}

void main()
{
    int choice,element;
    do
    {
        printf("\n1.PUSH\n2.POP\n3.PEAK\n");
        printf("enter the choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("enter element to be pushed");
                   scanf("%d",&element);
                   push(element);
                   display();
                   break;
            case 2:pop();
                   display();
                   break;
            case 3:peak();
                   break;
            default:exit(0);
                    break;
        }
    }while(choice<5);
    {
        printf("invalid");
    }
}