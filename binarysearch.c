#include<stdio.h>
int binarysearch(int array[],int item,int n);
int main()
{
	int n,item;
	printf("Enter the number of elements \n");
	scanf("%d",&n);
	int array[n];
	printf("Enter the elements in sorted order\n");        //in binary search we need sorted order data
	for(int i=0;i<n;i++)
		scanf("%d",&array[i]);
	printf("Enter the element which u want to search\n");
	scanf("%d",&item);

       int index=binarysearch(array,item,n);

	if(index==-1)
		printf("%d is not found in array\n",item);
	else
		printf("%d is found in array at %d position\n",item,n);
        return 0;
}
//binary search function
int binarysearch(int array[],int item,int n)
{
	int low=0;
	int up=n-1;
	int mid;
	while(low <= up)
	{
		mid=(low+up)/2;
		if(item > array[mid])
			low=mid+1;
		else if(item < array[mid])
			up=mid-1;
		else
			return mid;
	}
	return -1;
}




