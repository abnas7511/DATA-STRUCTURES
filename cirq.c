#include<stdio.h>
#include<stdlib.h>
int a[50],size,front,rear;
void enque(int item)
{
  if((rear+1)%size==front)
  {
    printf("que is full");
  }
  else if(rear==-1)
  {
    front=0;
    rear=0;
    a[rear]=item;
  }
  else
  {
    rear=(rear+1)%size;
    a[rear]=item;
  }
}
void deque()
{
 if(front==-1)
    printf("que is empty");
 else if(front==rear)
 {
    printf("deleted element is %d",a[front]);
    front=-1;
    rear=-1;
 }
 else
 {
    printf("deleted element is %d",a[front]);
    front=(front+1)%size;
 }

}

void display()
{
  int i;
  if(front==-1)
  {
   printf("que is empty");
  }
  else if(front<=rear)
  {
   for(i=front;i<=rear;i++)
    {
     printf("%d\t",a[i]);
    }
  }
  else
  {
    for(i=front;i<(size-1);i++)
     printf("%d\t",a[i]);
    for(i=0;i<=rear;i++)
     printf("%d\t",a[i]);
  }
}
void main()
{
    int choice,element;
    front=-1;
    rear=-1;
    printf("enter the size of que");
    scanf("%d",&size);
    do
    {
     printf("\n1.Enque\n2.Deque\n3.Display\n4.Exit\n");
     printf("enter the choice");
     scanf("%d",&choice);
     switch(choice)
     {
        case 1:printf("enter the element to be inserted");
               scanf("%d",&element);
               enque(element);
               break;
        case 2:deque();
               break;
        case 3:display();
               break;
        case 4:exit(0);
               break;
        default:printf("enter valid option");
                break;
     }
    }while (choice<5);
}