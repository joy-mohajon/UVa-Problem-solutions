#include<stdio.h>

long int palindrom(long int n)
{
    long int k,tmp = 0 ;
    while(n!=0){
       k = n%10;
       n/=10;
       tmp = (tmp*10)+k;
    }
    return tmp;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    long int ar[n];
    for(i=0;i<n;i++){
        scanf("%ld",&ar[i]);
    }
    for(i=0;i<n;i++){
        long int m=ar[i],tmp,count = 0;
        while(1){
            tmp = palindrom(m);

            if(tmp == m){
                printf("%ld %ld\n",count,tmp);
                break;
            }
            else
                m = m+tmp;

            count++;
        }
    }
    return 0;
}
