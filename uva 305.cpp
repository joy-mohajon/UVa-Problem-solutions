#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    vector <int> v;

    while(scanf("%d",&n)){
        if(n==0)break;

        for(i=1;i<=n*2;i++){
           v.push_back(i);
        }
        for(i=n+1;i<3000000;i++){
                int cnt = 0,j=-1;
            while(v.size()!=1){
                cnt++;
                j++;
                if(cnt==i){
                    if(j+1==v.size())
                        cnt = 0;
                    else
                        cnt = 1;

                    if(n<v.size()){//printf(";;;;;\n");
                        if((j+1)<=n)
                            break;
                    }  // printf("%d ",v[j]);
                    v.erase(v.begin()+j);
                    //printf("siZe = %d\n",v.size());
                }
                if(j+1>=v.size())
                    j=-1;

            }
            if(v.size()==1)
                break;
            v.clear();
//printf("\n",i);
            for(int i=1;i<=n*2;i++){
                v.push_back(i);
            }
        }
        printf("%d\n",i);
    }
    return 0;
}
