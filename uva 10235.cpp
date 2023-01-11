#include<bits/stdc++.h>

using namespace std;

int is_prime(int n)
{
    // if n is prime then return 1 otherwise 0;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;

    while(cin >> n){
        // reversing given number
        string str = to_string(n);
        reverse(str.begin(), str.end());
        int rev = stoi(str);

        if(is_prime(n)==1 && is_prime(rev)==1 && n!=rev)
            cout << n << " is emirp." << endl;
        else if(is_prime(n)==1)
            cout << n << " is prime." << endl;
        else
            cout << n << " is not prime." << endl;
    }
    return 0;
}
