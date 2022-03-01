#include<stdio.h>
int bsearch (int [],int, int);
void read(int [],int  );
int bubblesort(int [],int);
void print(int);
void main()
{
	int a[100],i,n,s,search;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	read(a,n);
	bubblesort(a,n);
	printf("Soretd array is: ");
	for(i=0;i<n;i++)
	    printf("%d  ",a[i]);
	printf("\nEnter the element to be serached:");
	scanf("%d",&s);
	search=bsearch(a,n,s);
	print(search);
}

void read(int a[],int n)
{
	printf("Enter the elements:");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
}
int bsearch(int a[], int n, int key)
{
    int i=0,b=n-1,m;
	while(i<=b)
	{
		int m= (i+b)/2;
		if(a[m] == key)
			return m+1;
		else if(a[m]>key)
		    b=m-1;
		else
			i=m+1;
	}

	return 0;
}
int bubblesort(int a[],int n)
{
    int i,j,t;
    for(i=0;i<n;i++)
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
}
void print(int search)
{
    
	if(search==0)
		printf("Element not present");
	else 
		printf("Element present at %d ",search);
	
}
