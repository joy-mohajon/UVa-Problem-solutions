#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    string ay="ay";
    while(getline(cin, str)){
        for(int i=0; i<str.size(); i++){
            if(str[i]>=65 && 90>=str[i] || str[i]>=97 && str[i]<=122){
                int flag=0, temp;
                string ch="";
                if(str[i]!='a' && str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u'){
                    flag = 1;
                    ch += str[i];
                    temp = i;
                }
                while(str[i]>=65 && 90>=str[i] || str[i]>=97 && str[i]<=122){
                    i++;
                }
                if(flag==0){
                    str.insert(i, ay);
                    i+=2;
                }
                else{
                    str.insert(i, ch);
                    i++;
                    str.insert(i, ay);
                    i+=2;
                    str.erase(str.begin()+temp);
                    i--;
                }
            }
        }
        cout << str << endl;
    }
    return 0;
}
