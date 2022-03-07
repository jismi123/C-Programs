#include<stdio.h>
#define size 50
int isfull();
int isempty();
int insert(int);
int delete();
int display();
int Q[size],front=-1,rear=-1,n=size,item;
void main()
{
    int ch;
    printf("\n 1.Insert \n 2.Delete \n 3.Display \n 4.Exit\n");
    do
    {
     printf("\nEnter your choice\n");
     scanf("%d",&ch);
     switch(ch)
     {
         case 1:
         printf("Enter the element to be inserted\n");
         scanf("%d",&item);
         insert(item);
         break;

         case 2:
         item=delete();
         if(item!=-1)
         printf("Item deleted is %d\n",item);
         break;

         case 3:
         display();
         break;
     }
    } while (ch<4);
}
int isfull()
{
    if(front==(rear+1)%n)
    return 1;
    else 
    return 0;
}

int isempty()
{
 if (front==-1&&rear==-1)
 return 1;
 else 
 return 0;
}
    
int insert(int item)
{
    if(isfull())
    printf("Queue is full\n");
    else
    {  if(isempty())
       front=0,rear=0;
       else
       rear=((rear+1)%n);
       Q[rear]=item;
    }
}
    
int delete()
{
    if (isempty())
    {
        printf("Queue is empty\n");
        return -1;
    }
    else
    {
       item=Q[front];
       if(front==rear)
       front=-1,rear=-1;
       else
       front=(front+1)%n;
       return item;
    }
}

    int display()
    {
        int i;
        printf("Queue is :");
        for(i=front;i<rear+1;i++)
        printf("\n%d",Q[i]);
    }
