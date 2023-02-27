#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*link;
};
struct node*top;
void display()
{
    struct node*ptr;
    if(top==NULL)
    {
        printf("stack is empty\n");
    }
    else
    {
        ptr=top;
        printf("the elements are:\n");
        while(ptr!=NULL)
        {
            printf("%d\t",ptr->data);
            ptr=ptr->link;
        }
    }
}
void push(int element)
{
 struct node*new;
 new=(struct node*)malloc(sizeof(struct node));
 new->data=element;
 new->link=top;
 top=new;
 display();
}

void pop()
{
    struct node*temp;
    if(top==NULL)
    {
        printf("emoty");
    }
    else
    {
        temp=top;
        printf("the poped element is %d\n",top->data);
        top=top->link;
        free(temp);
        display();
    }
}
void main()
{
 int choice,element;
 do
 {
    printf("\n1.push\n2.pop\n3.display\n4.exit\n");
    printf("enter the choice");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:printf("enter th element to be pushed");
           scanf("%d",&element);
           push(element);
           break;
    case 2:pop();
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