#include<bits/stdc++.h>
#include<vector>

using namespace std;
vector <int> v;

void Sieve(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true.
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }
     v.push_back(1);

    // storing all prime by a vector
    for (int p=2; p<=n; p++)
       if (prime[p])
           v.push_back(p);
}

void printAll()
{
    for(int i=0; i<v.size(); i++)
        cout << " " << v[i];
}

int main()
{
    int n, c;
    while(cin >> n >> c){

        Sieve(n);
        cout << n << " " << c << ":";

        int len = v.size();
        if(len<2*c)
            printAll();
        else{
            int a, b;
            // find out list of the prime numbers from
            // the center of the total prime numbers
            // range(1-n)
            if(len%2==0){
                len/=2;
                a = len-c;
                b = len+c-1;
                for(int j=a; j<=b; j++)
                    cout << " " << v[j];
            }
            else{
                len/=2;
                a = len-(c*2-1)/2;
                b = len+(c*2-1)/2;
                for(int j=a; j<=b; j++)
                    cout << " " << v[j];
            }
        }
        cout << endl << endl;
        v.clear();
    }
    return 0;
}
