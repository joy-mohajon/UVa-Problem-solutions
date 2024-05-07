#include<bits/stdc++.h>
#include <map>

using namespace std;

int countt(int cnt, int m)
{
    for(int i=2; i<=sqrt(m); i++){
        while(m%i==0){
           cnt++;
           m /= i;
        }
    }

    if(m>2)
       cnt++;

    return cnt;
}

int main()
{
    int n, cnt=1;
    map <int, int> m;

    for(int i=2; i<=1000000; i++){
        cnt = countt(cnt, i);
        m[i] = cnt;
    }

    while(cin >> n){
        cout << m[n] << endl;
    }
    return 0;
}
