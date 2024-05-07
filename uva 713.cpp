#include<bits/stdc++.h>

using namespace std;

string add(string s1, string s2)
{
    int sum, carry=0;
    string s3, summ="";

    for(int i=s1.size()-1, j=s2.size()-1; i>=0; i--, j--){
        int value=0;

        if(j>=0)
            value = s2[j]-48;

        sum = (s1[i]-48) + value + carry;
        s3 = to_string(sum);
        if(s3.size()>1){
           summ += s3[1];
           carry = s3[0]-48;
        }
        else{
           summ += s3[0];
           carry = 0;
        }
    }

    if(s3.size()>1)
        summ += s3[0];

    return summ;
}

int main()
{
    int n;
    string s1, s2;

    cin >> n;

    while(n--){
        cin >> s1 >> s2;

        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());

        if(s1.size()<s2.size()){
            string temp;
            temp = s1;
            s1 = s2;
            s2 = temp;
        }

        string sum = add(s1, s2);
        int flag = 0;

        for(int i=0; i<sum.size(); i++){
            if(flag==0){
                if(sum[i]>48){
                    flag = 1;
                    cout << sum[i];
                }
            }
            else
                cout << sum[i];
        }
        cout << endl;
    }
    return 0;
}
