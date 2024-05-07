#include<stdio.h>

int main()
{
  int n;
  long int a,b;
  scanf("%d",&n);
  while(n--){
    scanf("%ld %ld",&a,&b);
    long int m = (a+b)/2;
    long int k = abs(a-m);
    if(m+k==a && abs(m-k)==b){
      printf("%ld %ld\n",m,k);
    }
    else printf("impossible\n");
  }
  return 0;
}