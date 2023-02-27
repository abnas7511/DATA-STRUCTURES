#include<stdlib.h>
#include<stdio.h>
int a[25],size,front,rear;
void push(int element)
{
    int i;
    if(front==0 && rear==size-1)
        printf("que if full");
    else if(rear==-1)
    {
        front=0;
        rear=0;
        a[front]=element;
    }
    else if(front>0)
    {
        front=front-1;
        a[front]=element;
    }
    else
    {
        for(i=rear;i>=front;i--)
        {
            a[i+1]=a[i];
        }
        a[front]=element;
        rear=rear+1;
    }
}


void inject(int element)
{
    int i;
    if(front==0 && rear==size-1)
        printf("que if full");
    else if(rear==-1)
    {
        front=0;
        rear=0;
        a[rear]=element;
    }
    else if(rear<size-1)
    {
        rear=rear+1;
        a[rear]=element;
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            a[i+1]=a[i];
        }
        a[rear]=element;
        front=front-1;
    }
}

void pop()
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
    front=front+1;
 }
 
}

void eject()
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
    printf("deleted element is %d",a[rear]);
    rear=rear-1;
 }
 
}

void display()
{
    int i;
    if(front==-1)
     printf("que is empty");
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("%d\t",a[i]);
        }
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
        printf("\n1.Push\n2.Pop\n3.Inject\n4.Eject\n5.Display\n6.Exit\n");
        printf("enter the choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("enter the element to be inserted");
                   scanf("%d",&element);
                   push(element);
                   break;
            case 2:pop();
                   break;
            case 3:printf("enter the element to be inserted");
                   scanf("%d",&element);
                   inject(element);
                   break;
            case 4:eject();
                   break;
            case 5:display();
                   break;
            case 6:break;
            default:printf("enter valid option");
                    break;        
        }
    } while (choice!=6);
    
}