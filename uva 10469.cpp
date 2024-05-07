#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,s;
    while(scanf("%d %d",&a,&b)!=EOF){
        s=a^b;
        printf("%d\n",s);
    }
    return 0;
}
