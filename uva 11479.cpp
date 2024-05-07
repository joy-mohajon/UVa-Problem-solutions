#include<stdio.h>
int main()
{
    long int n,a,b,c;
    int i;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%ld %ld %ld",&a,&b,&c);

        if(a+b<=c || a+c<=b || b+c<=a)printf("Case %d: Invalid\n",i+1);
        else if(a==b && b==c)printf("Case %d: Equilateral\n",i+1);
        else if(a==b || a==c || b==c)
            printf("Case %d: Isosceles\n",i+1);
        else printf("Case %d: Scalene\n",i+1);
    }
    return 0;
}
