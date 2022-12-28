#include<bits/stdc++.h>

using namespace std;

long long int func(long long int n)
{
    long int cnt=0;

    while(1){
        if(n%2==0)
            n/=2;
        else
            n=3*n+1;
        cnt++;
        if(n==1)
            break;
    }
    return cnt;
}

int main()
{
    long long int l, h;

    while(cin >> l >> h){
        if(l==0 && h==0)
            break;

        long long int a = min(l, h), b = max(l, h);

        long long cnt=0, temp;
         // find out length of the sequence for every value in pair of series
        for(long long int i=a; i<=b; i++){
            if(cnt<func(i)){
                // maximum length
                cnt=func(i);
                temp = i;
            }
        }
        cout << "Between " << a << " and " << b << ", " << temp << " generates the longest sequence of " << cnt << " values." << endl;
    }
    return 0;
}
