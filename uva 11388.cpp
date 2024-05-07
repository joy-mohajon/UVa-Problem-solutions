#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    while(n--){
        long long int x, y, mult, flag=0;

        cin >> x >> y;

        if(x==y)
            cout << x << " " << y << endl;
        else {
            mult = x * y;

            for(long long int i=x; i<=y/2; i+=x){
                if(mult%i==0){
                   long long int div = mult/i;

                    if(y%i==0 && y%div==0){
                        cout << i << " " << div << endl;
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==0)
                cout << -1 << endl;
        }
    }
    return 0;
}
