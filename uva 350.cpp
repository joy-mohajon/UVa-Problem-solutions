#include<bits/stdc++.h>

using namespace std;

int main()
{
    unsigned int z,i,m,l,tmp;
    int t=1, cnt;
    while(scanf("%u %u %u %u",&z,&i,&m,&l)){
        if(z==0 && i==0 && m==0 && l==0)break;

        cnt = 0;
        l = (z * l + i ) % m;
        tmp = l;

        do{
           l = (z * l + i ) % m;
           cnt++;
        }while(l!=tmp);

        printf("Case %d: %d\n",t,cnt);
        t++;
    }
    return 0;
}
