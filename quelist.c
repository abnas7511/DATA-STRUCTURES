#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*link;
};
struct node*front,*rear;
void display()
{
    struct node*ptr;
    if(front==NULL)
    {
        printf("que is empty\n");
    }
    else
    {
        ptr=front;
        printf("the elements are:\n");
        while(ptr!=NULL)
        {
            printf("%d\t",ptr->data);
            ptr=ptr->link;
        }
    }
}
void enque(int element)
{
  struct node*new;
  new=(struct node*)malloc(sizeof(struct node));
  new->data=element;
  new->link=NULL;
  if(front==NULL)
   front=rear=new;
  else
 {
  rear->link=new;
  rear=new;
 }
 display();
}
void deque()
{
    struct node*temp;
    if(front==NULL)
     printf("not possible");
    else if(front==rear)
    {
        temp=front;
        front=rear=NULL;
        free(temp);
        display();
    }
    else
    {
        temp=front;
        front=front->link;
        free(temp);
        display();
    }
}
void main()
{
 int choice,element;
 do
 {
    printf("\n1.enque\n2.deque\n3.display\n4.exit\n");
    printf("enter the choice");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:printf("enter th element to be enqued");
           scanf("%d",&element);
           enque(element);
           break;
    case 2:deque();
           break;
    case 3:display();
           break;
    case 4:exit(0);
           break;
    default:printf("invalid option");
        break;
    }
 } while (choice!=5);
 
}