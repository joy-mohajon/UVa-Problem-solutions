#include<bits/stdc++.h>
#include <vector>

using namespace std;

int n, arr[50], prime[50];
vector <int> v;

void seive()
{
    for(int i=2; i*i<=50; i++){
        for(int j=i*i; j<=50; j+=i){
            prime[j]=1;
        }
    }
}

void circle(int x)
{
    arr[x] = 1;

    for(int i=2; i<=n; i++){
        if(arr[i]==0 && prime[i+x]==0){
               // cout << i<< " " << x << endl;
            if(find(v.begin(), v.end(), x)==v.end())
                v.push_back(x);
            circle(i);

        }
    }
    if(v.size()==n-2 && prime[v[n-3]+x]==0 && prime[1+x]==0)
        v.push_back(x);

    if(v.size()==n-1){
        cout << 1;
        for(auto a : v)
            cout << " " << a;
        cout << endl;
    }

    if(find(v.begin(), v.end(), x)!=v.end())
        v.pop_back();

       // cout << x << endl;
    arr[x] = 0;
    return ;
}

int main()
{
    seive();

    int flag=0, cnt=1;
    while(cin >> n){

    if(flag==1)
        cout << endl;
        cout << "Case " << cnt << ":" << endl;

        for(int i=2; i<=n; i++){
            memset(arr, 0, sizeof(arr));
            v.clear();
            arr[1]=1;
            if(prime[1+i]==0){
                 //   cout << "kdj " << i << endl;
                circle(i);
            }
        }

        cnt++; flag=1;
    }
    return 0;
}
