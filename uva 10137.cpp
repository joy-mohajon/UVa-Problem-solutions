#include<bits/stdc++.h>

using namespace std;

double func(double money)
{
    int a, b, tk = money;

    string str = to_string(money);

    for(int i=0; i<str.size(); i++){
        if(str[i]=='.'){
            a = str[i+1]-48;
            b = str[i+2]-48;
            break;
        }
    }
    tk = tk*100+a*10+b;

    money=(double)tk/100;

    return money;
}
int main()
{
    int n, t;

    while(cin >> n){
        double sum=0, arr[1005];

        if(n==0)
           break;

        for(int i=0; i<n; i++){
            cin >> arr[i];
            sum+=arr[i];
        }
        //calculating average amouont
        double aveg = sum/n;

        //calculating total exchanged money
        double s1=0.00, s2=0.00;
        for(int i=0; i<n; i++){
            if(arr[i]<aveg){
                double money = aveg-arr[i];
                //"func" function use to take 2 place
                // after the decimal point
                s1+=func(money);
            }
            else {
                double money = arr[i]-aveg;
                s2+=func(money);
            }
        }
        double maxx = max(s1, s2);
        cout << "$" << fixed << setprecision(2) << maxx << endl;
    }
    return 0;
}
