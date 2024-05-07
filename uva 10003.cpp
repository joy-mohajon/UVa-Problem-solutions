#include <bits/stdc++.h>

using namespace std;

int arr[52][52];
vector<int> v;

int f(int a, int b)
{
    if(arr[a][b]!=-1) return arr[a][b];
    
    if(a+1==b) return 0;
    
    int x=5000000;
    
    for(int i=a+1;i<b;i++)
        x = min(v[b]-v[a]+f(a,i)+f(i,b), x);
        
    arr[a][b] = x;
    
    return x;
    
}

int main()
{
        
    int l, n, c;
    
    while(scanf("%d", &l))
    {
        if(l==0) break;
        
        scanf("%d", &n);
        
        v.clear();
        v.push_back(0);
        
        for(int i=0;i<n;i++){
            scanf("%d", &c);
            v.push_back(c);
        }
        
        v.push_back(l);
        
        memset(arr,-1,sizeof(arr));
        
        printf("The minimum cutting is %d.\n",f(0,n+1));
        
    }

    return 0;
}