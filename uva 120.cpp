#include<bits/stdc++.h>

using namespace std;

int main()
{
    string input;
    vector <int> pancakes;
    vector <int> flips;

    while(getline(cin, input)){
        flips.clear();

        stringstream ss;
        ss << input;
        
        int n=0, x;
        while(ss >> x){
            pancakes.push_back(x);
            n++;
        }
        
        for(int i=n; i>0; i--){
            int maxValue_posi = distance(pancakes.begin(), max_element(pancakes.begin(), pancakes.begin()+i));

            if(maxValue_posi+1 != i){
                if(maxValue_posi==0){
                    reverse(pancakes.begin(), pancakes.begin()+i);
                    flips.push_back(n - i +1);
                }
                else{
                    //reversing sub vector on the top of maximum value position
                    reverse(pancakes.begin(), pancakes.begin()+maxValue_posi+1);
                    flips.push_back(n - maxValue_posi);

                    //reversing sub vector on the top of i'th position
                    reverse(pancakes.begin(), pancakes.begin()+i);
                    flips.push_back(n-i+1);
                }
            }
        }
        flips.push_back(0);

        cout << input << endl;

        cout << flips[0];
        for(int i=1; i<flips.size(); i++)
            cout << " " << flips[i];
        cout << endl;


        pancakes.clear();
        flips.clear();
    }
    return 0;
}
