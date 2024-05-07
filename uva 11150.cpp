#include<stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
        int s=n;
        while(n>=3){
            s+=n/3;
            n=(n/3)+(n%3);
        }
        if(n==2)s++;
        printf("%d\n",s);
    }
    return 0;
}
