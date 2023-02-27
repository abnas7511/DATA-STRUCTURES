#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*link;
};
struct node*head;

void display()
{
    struct node*ptr;
    if(head==NULL)
     printf("list is empty");
    else
    {
     ptr=head;
     printf("\nlist elements are:\n");
     while(ptr!=NULL)
     {
        printf("%d\t",ptr->data);
        ptr=ptr->link;
     }
    }
}
void insertfirst(int element)
{
    struct node*new;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=element;
    new->link=head;
    head=new;
    display();
}
void insertlast(int element)
{
 struct node*ptr,*new;
 new=(struct node*)malloc(sizeof(struct node));
 new->data=element;
 new->link=NULL;
 if(head==NULL)
  head=new;
 else
 {
    ptr=head;
    while(ptr->link!=NULL)
        ptr=ptr->link;
    ptr->link=new;
 }
 display();

}
void insertafter(int key,int element)
{
    struct node*new,*ptr;
    if(head==NULL)
     printf("not found");
    else
    {
        ptr=head;
        while(ptr->data!=key && ptr->link!=NULL)
         ptr=ptr->link;
        if(ptr->data!=key)
         printf("not found");
        else
        {
            new=(struct node*)malloc(sizeof(struct node));
            new->data=element;
            new->link=ptr->link;
            ptr->link=new;
        }
    }
    display();
}

void deletefirst()
{
    struct node*temp;
    if(head==NULL)
     printf("list is empty");
    else
    {
        temp=head;
        head=head->link;
        free(temp);
    }
    display();
}
void deletelast()
{
    struct node*temp,*prev,*curr;
    if(head==NULL)
    {
      printf("list is empty");
    }
    else if(head->link==NULL)
    {
     temp=head;
     head->link=NULL;
     free(temp);
    }
    else
    {
     prev=head;
     curr=head;
     while(curr->link!=NULL)
     {
        prev=curr;
        curr=curr->link;
     }
     prev->link=NULL;
     free(curr);
    }
    display();
}

void deleteany(int key)
{
  struct node*temp,*prev,*curr;
  if(head==NULL)
   printf("empty");
  else if(head->data==key)
  {
    temp=head;
    head=head->link;
    free(temp);
  }
  else
  {
    prev=head;
    curr=head;
    while(curr->data!=key && curr->link!=NULL)
    {
        prev=curr;
        curr=curr->link;
    }
    if(curr->data!=key)
     printf("not found");
    else
    {
        prev->link=curr->link;
        free(curr);
    }

  }
  display();

}

void main()
{
    int element,choice,key;
    do
    {
      printf("\n1.insertfirst\n2.insertlast\n3.insertafter\n4.deletefirst\n5.deletelast\n6.deleteany\n7.display\n8.exit\n");
      printf("enter the choice");
      scanf("%d",&choice);
      switch (choice)
      {
      case 1:printf("enter the no to be inserted");
             scanf("%d",&element);
             insertfirst(element);
             break;
      case 2:printf("enter the no to be inserted");
             scanf("%d",&element);
             insertlast(element);
             break;
      case 3:printf("enter the key value");
             scanf("%d",&key);
             printf("enter the element to be inserted");
             scanf("%d",&element);
             insertafter(key,element);
             break;
      case 4:deletefirst();
             break;
      case 5:deletelast();
             break; 
      case 6:printf("enter the element to be deleted");       
             scanf("%d",&key);
             deleteany(key);
             break;
      case 7:display();
             break;
      case 8:exit(0);
             break; 
      default:printf("invalid option");
              break;
      }
    }while (choice!=9);
}