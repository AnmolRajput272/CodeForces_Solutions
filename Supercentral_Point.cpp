#include<iostream>
using namespace std;
int main()
{
	int n; cin>>n;
	signed int a[n*2];
	for(int i=0;i<n*2;i=i+2)
	{
		cin>>a[i]>>a[i+1];
	}
	
	int count = 0;
	for(int i=0;i<n*2;i=i+2)
	{
		int k=0;
		for(int j=0;j<n*2;j=j+2)
		{
			
			if(a[i]>a[j] && a[i+1]==a[j+1] && j!=i)
			{
				k++; break;
			}
		}
		
		for(int j=0;j<n*2;j=j+2)
		{
			if(a[i]<a[j] && a[i+1]==a[j+1] && j!=i)
			{
				k++;break;
			}
		}
		
		int i1=i+1;
		
	    for(int j=1;j<n*2;j=j+2)
	    {
	    	if(a[i1]>a[j] && a[i1-1]==a[j-1] && j!=i+1)
	    	{
	    		k++;break;
			}
		}
		
		for(int j=1;j<n*2;j=j+2)
		{
			if(a[i1]<a[j] && a[i1-1]==a[j-1] && j!=i+1)
			{
				k++; break;
			}
		}
		
		if(k==4)
		{
			count++;
		}
	}
	
	cout<<count;
}
