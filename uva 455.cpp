#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, nn;

    cin >> n;
    nn = n-1;

    while(n--){
        string str;
        cin >> str;

        if(n!=nn)
            cout << endl;

        int i=0, j, cnt=0, len = str.size();
        for(j=i+1; j<len; j++){
            if(str[i]==str[j]){
                i++;
                cnt++;
            }
            else{
                i=0;
                if(cnt>0){
                     j-=cnt;
                     cnt=0;
                }
            }
        }

        int flag=0;
        for(int k=1; k<len; k++){
            if(str[0]!=str[k]){
                flag=1;
               break;
            }
        }
        if(flag==0)// for repetition of one character string..
            cout << 1 << endl;
        else{
            int sub=j-i;

            // if have any period then print length of the period
            // otherwise total length of the string
            if(j%sub==0 && i%sub==0)
                cout << j-i << endl;
            else
                cout << len << endl;
        }
    }
    return 0;
}
