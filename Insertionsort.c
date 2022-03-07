#include <stdio.h>
int read(int[],int);
int insertionsort(int[],int);
int display(int[],int);

int main()
{
 int a[100],n;
 printf("Enter the number of elements: ");
 scanf("%d",&n);
 read(a,n);
 insertionsort(a,n);
 display(a,n);
}

int read(int x[],int n)
{
 int i;
 printf("Enter the numbers to be sorted: \n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&x[i]);
 }
}

int insertionsort(int x[], int n)
{
 int p,j,key;
  for(p=1;p<n;p++)
  {
    key=x[p];
    for(j=p-1;j>=0&&x[j]>key;j--)
    {
       x[j+1]=x[j];
    }
      x[j+1]=key;
  }
}


int display(int x[],int n)
{
 int i;
 printf("Sorted array is : \n");
 for(i=0;i<n;i++)
 {                                 
  printf("%d",x[i]);
  printf("\n");
 }
}
