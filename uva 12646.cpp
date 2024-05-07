#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[3];

    int a, b, c;
    while(cin >> a >> b >> c){
        arr[0] = a, arr[1] = b, arr[2] = c;

        // counting the number of 0, 1;
        int cnt[2]={0};
        for(int i=0; i<3; i++){
            cnt[arr[i]]++;
        }

        // displaying the winner character
        //depend on counting number
        for (int i=0; i<3; i++){
            if(cnt[arr[i]]==1){
                char c = 65+i;
                cout << c << endl;
                break;
            }
            else if(cnt[arr[i]]==3){
                cout << "*" << endl;
                break;
            }
        }
    }
    return 0;
}
