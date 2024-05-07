#include<stdio.h>
int main()
{
    int n,i;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&n)){
        if(n==0)break;
        int sum = 0;
        for(i=1;i<n;i++){
           if(n%i==0)
             sum+=i;
           if(n<sum)
              break;
        }
        printf("%5d  ",n);
        if(sum>n)
            printf("ABUNDANT\n");
        else if(sum<n)
            printf("DEFICIENT\n");
        else printf("PERFECT\n");
    }
    printf("END OF OUTPUT\n");
    return 0;
}
