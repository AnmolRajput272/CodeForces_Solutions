#include<iostream>
using namespace std;

bool are0s(int* a,int n)
{
	for(int i=0;i<n;i++)
	{
		if(*(a+i)>0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	ios_base::sync_with_stdio(0);
	int n; cin>>n;
	int a[n];
	int k; cin>>k;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	int lastindex = 1;
	while(!are0s(a,n))
	{
		for(int i=0;i<n;i++)
		{
			if(a[i]>0)
			{
				a[i] = a[i] - k;
				lastindex = i+1;
			}
		}
	}
	
	cout<<lastindex;
}
