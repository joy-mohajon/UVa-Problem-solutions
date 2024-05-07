#include<stdio.h>
 
 int main() 
{
  int n,m,i,ar[510],br[510];
  scanf("%d",&n);
  while(n--){
    scanf("%d",&m);
    for(i=0;i<m;i++){
      scanf("%d",&ar[i]);
    }
    int sum=0, j, min = 30010;
    
    for(i=0;i<m;i++){ sum=0;
      for(j=0;j<m;j++){
        sum+=abs(ar[i]-ar[j]);
      }
      br[i] = sum;
    }
    
    for (i = 0 ; i < m - 1; i++)
  {
    for (j = 0 ; j < m - i - 1; j++)
    {
      if (br[i] > br[j+1])
      {
        int swap       = br[i];
        br[i]   = br[j+1];
        br[j+1] = swap;
      }
    }
  }
    printf("%d\n",br[0]);
  }
  return 0;
}