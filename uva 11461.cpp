#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,n,i,j;
    while(scanf("%d %d",&a,&b)){ ///input some range
            int k=0;
        if(a==0 && b==0)break;  ///break point
        for(i=a;i<=b;i++){
            n = sqrt(i);   /// find out square root some numbers between some range...!
            if(n*n == i){k++;}
        }
    printf("%d\n",k);
    }
    return 0;
}
