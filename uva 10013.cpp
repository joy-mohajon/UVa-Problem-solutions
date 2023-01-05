#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, flag=0;
    int a, b, digit[1000010], total[1000010];
    cin >> t;

    while(t--){
        cin >> n;

       if(flag!=0)
           cout << endl;

        for(int i=0; i<n; i++){
            cin >> a >> b;
            digit[i] = a + b;
        }

        int j=0, sum, carry = 0;
        for(int i=n-1; i>=0; i--){

            sum = digit[i] + carry;

            if(sum >= 10){
                carry = sum/10;
                total[j++] = sum%10;
            }
            else{
                carry=0;
                total[j++] = sum;
            }
        }
        if(carry > 0)
            total[j++] = carry;

        for(int i=j-1; i>=0; i--)
           cout << total[i];

        cout << endl;
        flag = 1;
    }
    return 0;
}
