#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n, j, cnt;
    vector <int> v;

    while(scanf("%d",&n)){
        if(n==0)break;

        for(int i=2;i<=n;i++)
            v.push_back(i);

        for(int i=2;;i++){
            j=0; cnt=1;
           while(v.size()!=1){
               j++;
               cnt++;
               if(cnt==i){
                  v.erase(v.begin()+j);
                  if(j==v.size())
                    cnt=0;
                  else cnt = 1;
               }
               if((j+1)>=v.size())
                  j=-1;
           }
           if(v.front()==2){
             printf("%d\n",i);
             break;
           }
           v.clear();
           for(int i=2;i<=n;i++)
            v.push_back(i);
        }
        v.clear();
    }
    return 0;
}
