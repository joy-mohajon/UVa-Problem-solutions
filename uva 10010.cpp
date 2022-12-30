#include<bits/stdc++.h>

using namespace std;

int a, b, x, y;
string str[55];

void findingWord(string word)
{
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            if(str[i][j]==word[0]){
                int p, q, k;

                //left horizontal
                p=i, q=j, k=0;
                while(q>=0 && k<word.size()){
                    if(str[p][q]==word[k])
                        q--, k++;
                    else
                        break;
                }
                if(k==word.size()){
                    x = i, y = j;
                    return;
                }

                //right horizontal
                p=i, q=j, k=0;
                while(q<b && k<word.size()){
                    if(str[p][q]==word[k])
                        q++, k++;
                    else
                        break;
                }
                if(k==word.size()){
                    x = i, y = j;
                    return;
                }

                //top vertical
                p=i, q=j, k=0;
                while(p>=0 && k<word.size()){
                    if(str[p][q]==word[k])
                        p--, k++;
                    else
                        break;
                }
                if(k==word.size()){
                    x = i, y = j;
                    return;
                }

                //bottom vertical
                p=i, q=j, k=0;
                while(p<a && k<word.size()){
                    if(str[p][q]==word[k])
                        p++, k++;
                    else
                        break;
                }
                if(k==word.size()){
                    x = i, y = j;
                    return;
                }

                //top-left diagonal
                p=i, q=j, k=0;
                while(p>=0 && q>=0 && k<word.size()){
                    if(str[p][q]==word[k])
                        p--, q--, k++;
                    else
                        break;
                }
                if(k==word.size()){
                    x = i, y = j;
                    return;
                }

                //bottom-right diagonal
                p=i, q=j, k=0;
                while(p<a && q<b && k<word.size()){
                    if(str[p][q]==word[k])
                        p++, q++, k++;
                    else
                        break;
                }
                if(k==word.size()){
                    x = i, y = j;
                    return;
                }

                //bottom-left diagonal
                p=i, q=j, k=0;
                while(p<a && q>=0 && k<word.size()){
                    if(str[p][q]==word[k])
                        p++, q--, k++;
                    else
                        break;
                }
                if(k==word.size()){
                    x = i, y = j;
                    return;
                }

                //top-right diagonal
                p=i, q=j, k=0;
                while(p>=0 && q<b && k<word.size()){
                    if(str[p][q]==word[k])
                        p--, q++, k++;
                    else
                        break;
                }
                if(k==word.size()){
                    x = i, y = j;
                    return;
                }
            }
        }
    }
}

int main()
{
    int n, m, flag=0;
    cin >> n;
    while(n--){
        cin >> a >> b;

        if(flag==1)
            cout << endl;

        for(int i=0; i<a; i++){
            cin >> str[i];
            transform(str[i].begin(), str[i].end(), str[i].begin(), ::tolower);
        }

        cin >> m;

        string word[m];
        for(int i=0; i<m; i++){
            cin >> word[i];
            transform(word[i].begin(), word[i].end(), word[i].begin(), ::tolower);
        }

        for(int i=0; i<m; i++){
            findingWord(word[i]);
            cout << x+1 << " " << y+1 << endl;
        }
        flag=1;
    }
    return 0;
}
