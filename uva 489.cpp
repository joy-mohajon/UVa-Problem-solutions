#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string word, guess;

    while(cin >> n)
    {
        if (n==-1)
            break;

        cin >> word >> guess;

        cout << "Round " << n << endl;

        multiset <char> ms;
        set <char> s;
        for(int i=0; i<word.size(); i++)
            ms.insert(word[i]);

        for(int i=0; i<guess.size(); i++)
            s.insert(guess[i]);

        // removing repeating character from guessing word
        string str = "";
        for(int i=0; i<guess.size(); i++){
            if(s.count(guess[i])){
                str+=guess[i];
                s.erase(guess[i]);
            }
        }

        int fail=1, life=7;
        for(int i=0; i<str.size(); i++)
        {
            // if the word contain guessing character then
            //erase the character otherwise decrease the life
            int flag = 0;
            for(int j=0; j<word.size(); j++)
            {
                if(str[i]==word[j])
                {
                    flag = 1;
                    break;
                }
            }
            if(flag==1){
                ms.erase(str[i]);
                if(ms.empty()){
                    fail = 0;
                    cout << "You win." << endl;
                    break;
                }
            }
            else{
                life--;
                if(life<=0){
                    fail = 0;
                    cout << "You lose." << endl;
                    break;
                }
            }
        }
        if(fail == 1)
            cout << "You chickened out." << endl;

        ms.clear();
        s.clear();
    }
    return 0;
}
