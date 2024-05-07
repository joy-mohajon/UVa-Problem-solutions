#include<bits/stdc++.h>

using namespace std;

int main()
{
    char c;
    int cnt[30],n;
    priority_queue<pair<int, int> >q;

    scanf("%d",&n);

    for(int i=0;i<26;i++)
        cnt[i]=0;

    while(scanf("%c",&c)!=EOF){
        if(c>=65 && c<=90 || c>=97 && c<=122){
           c = toupper(c);
           cnt[c-'A']++;
        }
    }

    for(int i=0;i<26;i++){
        if(cnt[i]>0){
            q.push(make_pair(cnt[i],-(i+'A')));
        }
    }

    while(!q.empty()){
        printf("%c %d\n",-q.top().second,q.top().first);
        q.pop();
    }

     return 0;
}
