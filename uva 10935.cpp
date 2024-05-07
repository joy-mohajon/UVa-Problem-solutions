#include<stdio.h>
int k=0;
void topBottom(int ar[],int n,int flag)
{
    int i=0,j=0,br[n];
    if(k==0)printf("%d",ar[i]);
    else {
        if(flag%2!=0){
                br[j++] = ar[i];flag++;;
        }
        else {
                printf(", %d",ar[i]); flag=1;
        }
    }
    for(i=1;i<n;i++){
        if(flag%2!=0){
            br[j++] = ar[i];flag++;;
        }
        else {
            printf(", %d",ar[i]); flag=1;
        }
    }
    if(j==1){printf("\nRemaining card: %d\n",br[0]);k=0;return;}
    else {
         k=1;
        topBottom(br,j,flag);
    }
}
int main()
{
    int n,i;
    while(scanf("%d",&n)){
            int flag =1;
        if(n==0)break;
        else if(n==1)printf("Discarded cards:\nRemaining card: %d\n",n);
        else{
            int ar[55];
            printf("Discarded cards: ");
            for(i=0;i<n;i++){
               ar[i] = i+1;
            }
            topBottom(ar,n,flag);
        }
    }
    return 0;
}
