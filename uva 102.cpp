#include <stdio.h>
#include<string.h>
int main()
{
  int n[10],sum[6],i,temp,l,k;
  char st[6][4];
  while(scanf("%d %d %d %d %d %d %d %d %d",&n[0],&n[1],&n[2],&n[3],&n[4],&n[5],&n[6],&n[7],&n[8])!=EOF){k=0;
    sum[0]=n[1]+n[2]+n[3]+n[4]+n[6]+n[8];strcpy(st[0],"BCG");
    sum[1]=n[1]+n[2]+n[3]+n[5]+n[6]+n[7];strcpy(st[1],"BGC");
    sum[2]=n[0]+n[1]+n[4]+n[5]+n[6]+n[8];strcpy(st[2],"CBG");
    sum[3]=n[0]+n[1]+n[3]+n[5]+n[7]+n[8];strcpy(st[3],"CGB");
    sum[4]=n[0]+n[2]+n[4]+n[5]+n[6]+n[7];strcpy(st[4],"GBC");
    sum[5]=n[0]+n[2]+n[3]+n[4]+n[7]+n[8];strcpy(st[5],"GCB");
    temp=sum[0];
    for(i=0;i<6;i++){
      if(temp>sum[i]){
        temp=sum[i];l=i;k=1;
      }
    }
    if(k!=1){l=0;}
    printf("%s %d\n",st[l],sum[l]);
  }
  return 0;
}
