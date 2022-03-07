#include<stdio.h>
#define size 50
int isfull();
int isempty();
int push(int);
int pop();
int peek();
int display();
int a[100],top=0,item;
int main()
{
    int ch;
    printf("\n 1.Push \n 2.Pop \n 3.Peek \n 4.Display \n 5.Exit\n");
    do
    {
     printf("\nEnter your choice\n");
     scanf("%d",&ch);
     switch(ch)
     {
         case 1:
         printf("Enter the element to be pushed\n");
         scanf("%d",&item);
         push(item);
         break;

         case 2:
         item=pop();
         if(item!=-1)
         printf("Item popped is %d\n",item);
         break;

         case 3:
         item=peek();
         if(item!=-1)
         printf("Item is %d\n",item);
         break;

         case 4:
         display();
          break;
     }
    } while (ch!=5);
}
int isfull()
{
    if(top==size)
    return 1;
    else 
    return 0;
}

int isempty()
{
 if (top==0)
 return 1;
 else 
 return 0;
}
    
int push(int item)
{
    if(isfull())
    printf("Stack is full\n");
    else
    a[top++]=item;
}
    
int pop()
{
    if (isempty())
    {
        printf("Stack is empty\n");
        return -1;
    }
    else
    {
       top=top-1;
       item=a[top];
       return item;
    }
}

    int peek()
    {
        if(isempty())
        {
            printf("Stack is empty\n");
            return -1;
        }
        else{
            item=a[top-1];
            return item;
        }
    }
    int display()
    {
        int i;
        printf("The array is :");
        for(i=0;i<top;i++)
        printf("\n%d",a[i]);
    }
