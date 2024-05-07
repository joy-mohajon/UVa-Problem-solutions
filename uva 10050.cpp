#include<stdio.h>
int main()
{
    int t,n,p;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&p);
        int i,ar[p];
        for(i=0;i<p;i++){
           scanf("%d",&ar[i]);
        }
        int day[3650]={0},j;
        for(i=0;i<p;i++){
            for(j=ar[i];j<=n;j+=ar[i]){
                day[j-1] = 1;
            }
        }
        int count = 0,a=5,b=6;
        for(i=0;i<n;i++){
            if(i==a || i==b){
               if(i==b){a+=7;b+=7;}
               continue;
            }
            if(day[i]==1)
                count++;
         }

         printf(" %d\n",count);
    }
}
