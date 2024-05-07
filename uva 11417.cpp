#include<stdio.h>

int gcd(int a, int b)
{
    if(b==0)
        return a;
    else gcd(b,a%b);
}

int main()
{
    int i,n,s=0,j;
    while(scanf("%d",&n)){s=0;
            if(n==0)break;
    for(i=1;i<n;i++){
        for(j=i+1;j<=n;j++){
            s+=gcd(i,j);
        }
    }
    printf("%d\n",s);
    }
    return 0;
}
