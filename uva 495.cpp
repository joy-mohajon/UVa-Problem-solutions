#include<bits/stdc++.h>

using namespace std;

string s[5010];

string add(string s1, string s2)
{
    int carry = 0;
    string s0;
    for(long int i=s2.size()-1, j=s1.size()-1; i>=0; i--,j--){

        int a = s2[i]-48;
        int b;

        if(j<0)
            b=0;
        else
            b = s1[j]-48;

        int sum = a + b + carry;
        string ch = to_string(sum);

        if(ch.size()>1){
            s0 += ch[1];
            carry = ch[0]-48;
        }
        else{
             s0 += ch[0];
             carry=0;
        }
    }
    if(carry>0){
        char c = carry+48;
        s0 += c;
    }
    reverse(s0.begin(), s0.end());

    return s0;
}
void fib()
{
    int i=3;
     s[0] ="0", s[1]="1", s[2]="1";
    while(i<5001){
        s[i] = add(s[i-2], s[i-1]);
        i++;
    }
}

int main()
{
    int n;
    fib();
    while(cin >> n){
       cout << "The Fibonacci number for " << n << " is " << s[n] << endl;
    }
    return 0;
}
