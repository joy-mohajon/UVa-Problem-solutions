#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)){
        if(n==0)break;

        unsigned long long int i, sum=0;
        for(i=1;i<=n;i++){
            sum = sum+(i*i);
        }
        printf("%llu\n",sum);
    }
    return 0;
}
