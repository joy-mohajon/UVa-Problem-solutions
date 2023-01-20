#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, test=1;
    int arr[50];

    while(cin >> n){
        for(int i=0; i<n; i++)
            cin >> arr[i];
        
        long long max_pro=0;
        for(int i=0; i<n; i++){
            long long product = 1;
            for(int j=i; j<n; j++){
                product *= arr[j];
                if(max_pro < product)
                    max_pro = product;
            }
        }
        cout << "Case #" << test << ": The maximum product is " << max_pro << "." << endl << endl;
        test++;
    }
    return 0;
}