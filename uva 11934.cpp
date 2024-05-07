#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d, l;

    while(cin >> a >> b >> c >> d >> l){
        if(a==0 && b==0 && c==0 && d==0 && l==0)
            break;

        int cnt=0, result;
        for(int i=0; i<=l; i++){
            result = a*i*i + b*i + c;
            if(result%d==0)
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
