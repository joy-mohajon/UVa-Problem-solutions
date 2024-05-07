#include<stdio.h>

int main()
{
    unsigned int a, b;
    while(scanf("%u %u", &a, &b)){
        if(a==0 && b==0)break;
        int res=0,count=0;
        while(a||b){
            res=((a%10)+(b%10)+res)/10;
            a/=10;
            b/=10;
            count+=res;
        }
        if(count==0)
            printf("No carry operation.\n");
        else if(count==1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n", count);
    }
    return 0;
}
