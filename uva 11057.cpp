#include <bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
  int n,k,a,b;
  while(scanf("%d",&n)!=EOF){
    int ar[10010],i,j,sub=10000001;
    for(i=0;i<n;i++){
      scanf("%d",&ar[i]);
    }
    sort(ar,ar+n);
    
    scanf("%d",&k);
    for(i=0;i<n;i++){
      for(j=i;j<n;j++){
        if(ar[i]+ar[j]==k){
          int x = ar[i],y = ar[j];
          int sum = abs(x-y);
          if(sub>sum){
             a = ar[i];b = ar[j];
             sub = sum;
          }
        }
      }
    }
    if(a<b)
      printf("Peter should buy books whose prices are %d and %d.\n\n",a,b);
    else printf("Peter should buy books whose prices are %d and %d.\n\n",b,a);
  }
}