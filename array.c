#include<stdio.h>
int reverse1(int array[],int n);
int linearsearch(int array[],int n,int item);
int main()
{
	int n,item,index;
	printf("Enter the number of elements \n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	int array[n];
	for(int i=0;i<n;i++)
		scanf("%d",&array[i]);
	printf("Enter the item which u want to search\n");
	scanf("%d",&item);
	//reverse array
	int reverse=reverse1(array,n);
	//linear search array
	index=linearsearch(array,n,item);
        if(index==-1)
		printf("%d is not found in array\n",item);
	else
		printf("%d is found at %d position\n",item,index);
	return 0;
}
//linear search array
int linearsearch(int array[],int n,int item)
{
	int i=0;
	while(item!=array[i])
	{
		i++;
	}
//	printf("%dbye\n",i);
	if(i < n)
		return i;
	else
		return -1;
}
//reverse array 
int reverse1(int array[],int n)
{
	int i=0;
	for(int i=n-1;i>=0;i--)
		printf("%d\n",array[i]);
}
