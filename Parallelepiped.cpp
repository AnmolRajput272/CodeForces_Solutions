#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c; cin>>a>>b>>c;
    cout<<4*(sqrt((a*b)/c*1.0)+sqrt((b*c)/a*1.0)+sqrt((c*a)/b*1.0));
}
