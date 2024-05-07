#include<bits/stdc++.h>

using namespace std;
int main()
{
    unsigned long long n;
    while(cin>>n){
        n = n/2+1;
        n=n*n;
        cout<<n*6-9<<endl;
    }
}
