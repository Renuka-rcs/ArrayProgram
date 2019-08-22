#include<stdio.h>
int main()
{
	int item,n;
	printf("Element the number of element\n");
	scanf("%d",&n);
	int array[n];
	printf("Enter the element\n");
	for(int i=0;i<n;i++)
        {	
		scanf("%d",&array[i]);
	}
//find smaller element
	int min=0;
	for(int j=1;j<n;j++)
	{
		if(array[min]>array[j])
			min=j;
	}
	if(min!=0)
	{
		int temp=array[0];
		array[0]=array[min];
		array[min]=temp;
	}
	for(int i=0;i<n;i++)
		printf("%d",array[i]);
	printf("\n");
	return 0;
}

