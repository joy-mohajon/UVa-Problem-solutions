#include<bits/stdc++.h>

using namespace std;

int main()
{
  int i,n,ar[3010],br[3010];
  while(scanf("%d",&n)!=EOF){
    for(i=0;i<n;i++){
      scanf("%d",&ar[i]);
    }
    int j,flag=1;
    
    for(i=0;i<n-1;i++){
      br[i] = abs(ar[i]-ar[i+1]);
    }
    sort(br,br+(n-1));
    
    for(i=0,j=1;i<n-1;i++,j++){
      if(br[i]!=j){
        flag = 0;break;
      }
    }
    
    if(flag== 1){
      printf("Jolly\n");
    }
    else printf("Not jolly\n");
      
  }
  return 0;
}