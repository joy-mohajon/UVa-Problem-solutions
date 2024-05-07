#include<stdio.h>
#include<math.h>

int main()
{
    long long int n;
    while(scanf("%lld",&n)){
        if(n==0)break;
        long long temp = sqrt(n);
        if((temp*temp)==n)
            printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
