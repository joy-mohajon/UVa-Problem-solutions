#include<stdio.h>
 int main()
 {
     int n,a,b,c,d;
     scanf("%d",&d);
     while(d--){
        int sum=0,i;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d %d %d",&a,&b,&c);
            sum += a*c;    ///summation = the farmyard in square meters * the integer value that expresses the farmers environment-friendliness
        }
     printf("%d\n",sum);
     }
     return 0;
 }
