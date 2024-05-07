#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;

    cin >> t;

    while(t--){
        int p=0;

        cin >> n;
        scanf("%*c");

        string st[n];

        for(int i=0; i<n; i++){
            getline(cin, st[i]);
        }

        for(int i=0; i<n; i++){
            if(st[i][0]=='R')
                p++;
            else if(st[i][0]=='L')
                p--;
            else{
                int index;

                if(st[i].size()==11)
                    index = 100;
                else if(st[i].size()==10){
                    index = ((st[i][8]-48)*10) + (st[i][9]-48);
                }
                else if(st[i].size()==9){
                    index = (st[i][8]-48);
                }

                if(st[index-1][0]=='R')
                    p++;
                else if(st[index-1][0]=='L')
                    p--;

                st[i] = st[index-1];
            }
        }
        cout << p << endl;
    }
    return 0;
}
