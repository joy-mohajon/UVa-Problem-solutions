#include <bits/stdc++.h>

using namespace std;

int main()

{
    stack<int> station;
    int b[1001];
    int N,c;
    while(scanf("%d", &N)){
        while(1){
            if(station.size() > 0) station.pop();
            int j = 1;
            for(int i = 0; i < N; i++){
                scanf("%d", &c);
                if(c == 0) break;

                while(j < N && j != c) {
                    if(station.size() > 0 && station.top() == c) break;
                    cout<< j;
                    station.push(j);j++;
                }cout<<endl;
                if(station.top() == c) station.pop();
            }
            if(station.size() == 0) printf("Yes\n");
            else printf("No\n");
       }
       cout<<endl;
    }
    return 0;
}

