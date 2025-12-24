#include<stdio.h>
int main()
{
	int arr[100],n;
	printf("enter the no of elements:-- ");
	scanf("%d",&n);
	printf("\nenter an array :- \n");
	for(int i=0;i<n;i++)
	{
		printf("enter element %d  ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\n array before sorting:-  ");
	for(int i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}

for(int i=0;i<n-1;i++)
{
	for(int j=0;j<n-1-i;j++)
	{
		if(arr[j]>arr[j+1])
		{
			int temp=arr[j+1];
			arr[j+1]=arr[j];
			arr[j]=temp;
		}
	}
}
printf("\narray after sorting :- \n");
for(int i=0;i<n;i++)
{
	printf("%d ",arr[i]);
}
}