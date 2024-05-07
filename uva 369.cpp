#include<iostream>
#include <iomanip>
#include<bits/stdc++.h>

using namespace std;

long double combination(long double n)
{
    long double r=1;
    for(long double i=n;i>0;i--){
        r*=i;
    }
    return r;
}
int main()
{
    long double a,b,k;
    while(cin>>a>>b){
    if(a==0 && b==0)break;
    k = (combination(a))/(combination(a-b)*combination(b));
    cout<<a<<" things taken "<<b<<" at a time is " << fixed << setprecision(0) <<k<<" exactly.\n";
    }
    return 0;
}
