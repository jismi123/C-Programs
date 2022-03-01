#include<stdio.h>
int linearsearch(int [], int, int);
	
void main()
{
		int a[50],key, i, n, pos;
		printf("Enter the number of elements in array:\n");
		scanf("%d",&n);
		printf("Enter %d numbers\n", n);
		for ( i = 0 ; i < n ; i++ )
			  scanf("%d",&a[i]);
		printf("Enter the number to search:\n");
		scanf("%d",&key);
		
		pos = linearsearch(a, n, key);
		
		if ( pos == 0 )
			printf("%d is not present in array.\n", key);
		else
			printf("%d is present at location %d.\n", key, pos+1);
		
		
} 
	
int linearsearch(int p[], int n, int search)
{
		int c;
		
		for ( c = 0 ; c < n ; c++ )
		{
			if ( p[c] == search )
				return c;
		}
		
		return 0;
}
