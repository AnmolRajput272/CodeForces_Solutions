#include<iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    signed int diff;
    a[n-1]>=a[0] ? diff=a[n-1]-a[0] : diff=a[0]-a[n-1];
    int iindex=n,jindex=1;
    for(int i=0;i<n-1;i++)
    {
        signed int diff1=a[i]-a[i+1];
        if(diff1<0)
        {
            diff1 = diff1*(-1);
        }
        
        if(diff1<=diff)
        {
            diff=diff1;
            iindex = i+1;
            jindex= i+2;
        }
    
    }
    
    cout<<iindex<<" "<<jindex;
    
    
}
