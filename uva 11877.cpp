#include<bits/stdc++.h>

using namespace std;

int fullBottol, cnt;
/*
int countingBottol(int n)
{
    if(n<3){
        if(n==2){
            fullBottol++;
            cnt++;
        }


        return fullBottol;
    }
    int bottol=0;

    bottol = n/3;

    int e_bottol = n-(bottol * 3);

    // for borrow empty bottol
    if(e_bottol<3){
        if(e_bottol==2){
            bottol++;
            cnt++;
        }
    }
    //total drunk bottol
    fullBottol += bottol;

    // after drink
    if(e_bottol==1)
        countingBottol(bottol+1);
    else
        countingBottol(bottol);

    return fullBottol;
}
*/
int main()
{
    int n;
    while(cin >> n){
        if(n==0)
            break;

        if(n%2==0)
            cout << n/2 << endl;
        else
            cout << (n-1)/2 << endl;
    }
    return 0;
}
