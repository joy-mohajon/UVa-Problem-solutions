#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    vector <int> vec;
    map <int, int>m;

    while(cin>>n){
        if(m.count(n)==0){
            m[n] = 1;
            vec.push_back(n);
        }
        else m[n]++;
    }
    for(int i=0;i<vec.size();i++){
        printf("%d %d\n",vec[i],m[vec[i]]);
    }
    return 0;
}
