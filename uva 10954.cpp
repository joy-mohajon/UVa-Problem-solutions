#include<bits/stdc++.h>
#include<queue>

using namespace std;

int main()
{
    int n;

    while(cin >> n){
        // priority queue use to input data as a descending order and
        // greater use for convert to ascending order
        priority_queue <int, vector <int>, greater <int> > q;
        if(n==0)
            break;

        int x;
        while(n--){
            cin >> x;
            q.push(x);
        }


        int total=0, sum=0;
        while(q.size()>1){
            int a = q.top();
            q.pop();
            int b = q.top();
            q.pop();
            sum = a+b;
            q.push(sum);
            total+=sum;
        }

        cout << total << endl;
    }
    return 0;
}
