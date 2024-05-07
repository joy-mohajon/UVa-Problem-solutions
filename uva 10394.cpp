#include<bits/stdc++.h>
#define maxx 20000000

using namespace std;

int prime[maxx];
int arr[maxx];

void pair_prime()
{
    // Create a array "prime[0..n]" and initialize
    // all entries it as 0 by declaring globally. A value in prime[i] will
    // finally be 1 if i is Not a prime, else 0.
    for (int p=2; p<=sqrt(maxx); p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == 0)
        {
            // Update all multiples of p
            for (int i=p*2; i<maxx; i += p)
                prime[i] = 1;
        }
    }

    // store all expected prime numbers by a array
    for (int p=3,j=0; p<maxx; p+=2)
       if (prime[p]==0 && prime[p+2]==0)
          arr[j++] = p;
}

int main()
{
    int n;

    pair_prime();

    while(cin >> n){
    cout << "(" << arr[n-1] << ", "
                << arr[n-1]+2 << ")"
                << endl;
    }
    return 0;
}
