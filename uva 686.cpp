#include<stdio.h>

int prime(long int n, int flag)
{
    int i;
    for(i=2;i<=sqrt(n);i++)
        if(n%i==0){
           flag = 1;break;
        }
    return flag;
}

 int main()
 {
     long int n;
     while(scanf("%ld",&n)){
        if(n==0)break;
        long int a, b, i, cnt = 0,flag = 0;

        for(i=3;;i+=2){
            a = i;
            b = n-i;
            if(a>b)break;
            if(prime(a,flag)==0&& prime(b,flag)==0){
                if(a+b==n)
                   cnt++;
            }
        }
        if(n==4)
            printf("1");
        else
            printf("%ld\n",cnt);
     }
     return 0;
 }
