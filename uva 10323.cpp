#include<bits/stdc++.h>

using namespace std;

long long int factorial(long long int n)
{
    if(n==1)
        return 1;
    else
        return n * factorial(n-1);
}

int main()
{
    long long int n;

    while(cin >> n){
        if(n<0){
            if(n%2==0)
                cout << "Underflow!" << endl;
            else
                cout << "Overflow!" << endl;
        }
        else{
            if(n>=8 && n<=13)
                //the range of Arif�s computer 10000 to 6227020800
                cout << factorial(n) << endl;
            else if(n < 8)
                cout << "Underflow!" << endl;
            else
                cout << "Overflow!" << endl;
        }
    }
    return 0;
}
