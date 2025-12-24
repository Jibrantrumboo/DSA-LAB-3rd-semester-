#include<stdio.h>
int main()
{
	int arr[100],n,i,j,key;
	printf("enter no. of elements :- ");
	scanf("%d",&n);
	printf("\nenter elements :- ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("unsorted array = \n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	for(i=1;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
	printf("\nsorted array :--  ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}