#include<stdio.h>
int main()
{
    long long int n;
    while(scanf("%lld",&n)){
        if(n<0)break;
        printf("%lld\n",1+(n*(n+1))/2);
    }
    return 0;
}
