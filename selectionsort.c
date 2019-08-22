#include<stdio.h>
int main()
{
	int n,item;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	int array[n];
	printf("Enter the elments\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
//	printf("Enter the item which u want to search it\n");
//	scanf("%d",&item);
       //selection sort
       for(int i=0;i<n-1;i++)
       {
        int	 min=i;
	       for(int j=i+1;j<n;j++)
	       {
		       if(array[min]>array[j])
			       min=j;
	       }
	       if(i!=min)
	       {
		        int temp=array[i];
		       array[i]=array[min];
		       array[min]=temp;
	       }
       }
       printf("Sorted list is \n");
       for(int i=0;i<n;i++)
       {
	       printf("%d\n",array[i]);
       }
       return 0;
}
