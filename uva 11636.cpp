#include<stdio.h>
int main()
{
    int n,j=1;
    while(scanf("%d",&n)){
            int i=1,x=2;
        if(n<0)break;
        else if(n==0 || n==1)printf("Case %d: 0\n",j);
        else{
            while(1){
                if(n<=x){
                   printf("Case %d: %d\n",j,i);break;
                }
                else {
                   i++;x*=2;
                }
            }
        }
       j++;
    }
    return 0;
}
