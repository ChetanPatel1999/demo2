//copy one array in another array
#include<stdio.h>
void main()
{
	int n,i;
	printf("enter array size :");
	scanf("%d",&n);
	int arr[n],evenarr[n],oddarr[n],eve=0,od=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("array element are :-");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	// copy even element in even arr and odd element in odd arr
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			evenarr[eve]=arr[i];
			eve++;
		}
		else
		{
			oddarr[od]=arr[i];
			od++;
		}
	}
	printf("\neven arr :");
	for(i=0;i<eve;i++)
	{
		printf("%d ",evenarr[i]);
	}
	printf("\nodd arr :");
	for(i=0;i<od;i++)
	{
		printf("%d ",oddarr[i]);
	}
}
