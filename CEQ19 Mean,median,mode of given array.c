#include<stdio.h>
int main()
{
	int arr[]={16,18,27,16,23,21,19};
	int n=sizeof(arr)/sizeof(arr[0]);
	int sum=0,mean,median,mode,maxcount=0;
	int i,j;
	
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	mean=sum/n;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	if(n%2==0)
	{
		median=(arr[n/2]+arr[n/2-1])/2;
		
	}
	else
	{
		median=arr[n/2];
	}
	for(i=0;i<n;i++)
	{
		int count=0;
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
		}
		if(count>maxcount)
		{
			maxcount=count;
			mode=arr[i];
		}
	}
	printf("Mean=%d\n",mean);
	printf("Median=%d\n",median);
	printf("Mode=%d\n",mode);
}
