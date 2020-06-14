#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n; cin>>n; int a[n];
    long long lowest = INT_MAX;
    long long lowindex= 0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(lowest>a[i])
        {
            lowindex = i+1;
            lowest = a[i];
        }
    }
    
    
    count(a,a+n,lowest)>1 ? cout<<"Still Rozdil" : cout<<lowindex;
    
}
