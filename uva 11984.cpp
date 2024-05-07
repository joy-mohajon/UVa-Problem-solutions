#include<stdio.h>
#include<math.h>

int main()
{
    int n,i=0,j;
    double a,f,c,d;
    scanf("%d",&n);
    while(n--){
        scanf("%lf %lf",&c,&d);
        f = (c*9/5)+d; ///celsius to fahrenheit converting
        a = f*5/9;i++;  /// converting fahrenheit to celsius
        if(a<0)a=a*(-1);
        printf("Case %d: %.2lf\n",i,a);
    }
    return 0;
}
