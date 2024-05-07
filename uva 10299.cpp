#include<bits/stdc++.h>

using namespace std;


// Euler's totient funtion algo.. 

long long phi(long long n)
{
    long long result = n;

    if(n%2==0){
        while(n%2==0){ 
            n = n/2;
        }
        result = result - result/2;
    }
    
    for(long long i=3; i*i<=n; i+=2){
        if(n%i==0){
            while(n%i==0){  // Until m isn't divided by i
                n = n/i;
            }
            result = result - result/i; // totient formula 
        }
    }

    if(n > 1)
        result = result - result/n;

    return (long long)result;
}

int main()
{
    long long n;

    while(cin >> n){
        if(n==0)
           break;
        
        if(n==1)
           cout << 0 << endl;
        else
            cout << phi(n) << endl;
    }
    return 0;
}