#include<iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    int a, sum = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        sum +=a;
	}
	
	int k=0;
	for(int i=1;i<=5;i++)
	{
		if((sum+i)%(n+1)!=1)
		{
			k++;
		}
	}
	
	cout<<k;
}
