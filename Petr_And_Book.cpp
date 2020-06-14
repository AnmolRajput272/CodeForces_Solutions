#include<iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    int a[7];
    for(int i=0;i<7;i++)
    {
        cin>>a[i];
    }
    
    int i=0;
    int index = 0;
    while(n>0)
    {
        i=i%7;
        n = n-a[i];
        index = i+1;
        i++;
    }
    
    cout<<index;
}
