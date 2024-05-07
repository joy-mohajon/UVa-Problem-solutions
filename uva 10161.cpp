#include<bits/stdc++.h>

using namespace std;

int main()
{
     unsigned long long int n,k,x,temp;
     while(scanf("%llu",&n)){
            if(n==0)break;
        unsigned long long int k1 = sqrt(n);
        long double k2 = sqrt(n);

        if(k1<k2)
            k1++;
        k = k1*k1;
        temp = k - (k1-1);

        if(k1%2!=0){
            if(temp<n){
                x = n - temp;
                printf("%llu %llu\n",k1-x,k1);
            }
            else if(temp>n){
                x = temp - n;
                printf("%llu %llu\n",k1,k1-x);
            }
            else
                printf("%llu %llu\n",k1,k1);
        }
        else {
            if(temp<n){
                x = n - temp;
                printf("%llu %llu\n",k1,k1-x);
            }
            else if(temp>n){
                x = temp - n;
                printf("%llu %llu\n",k1-x,k1);
            }
            else
                printf("%llu %llu\n",k1,k1);
        }

     }
     return 0;
}
