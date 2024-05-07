#include<stdio.h>
int main()
{
   int a,b,i,j,swap,l=1;
   while(scanf("%d %d",&a,&b)){
     if(a==0 && b==0)break;
     int ar[10010],br[b];
     for(i=0;i<a;i++){
       scanf("%d",&ar[i]);   
     }
     for(i=0;i<b;i++){
       scanf("%d",&br[i]);   
     }
     
     for (i = 0 ; i < a - 1; i++)
     {
       for (j = 0 ; j < a - i - 1; j++)
          {
          if (ar[j] > ar[j+1]) 
            {
             swap       = ar[j];
             ar[j]   = ar[j+1];
             ar[j+1] = swap;
            }
          }
     }printf("CASE# %d:\n",l);
     for(i=0;i<b;i++){
       int k=0;
       for(j=0;j<a;j++){
         if(br[i]==ar[j]){
            k=1;
            printf("%d found at %d\n",br[i],j+1);
            break;
         }
      
       }
       if(k==0)printf("%d not found\n",br[i]);
     }
     l++;
   }
   return 0;
}