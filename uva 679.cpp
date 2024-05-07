#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test, depth, I;

    while(cin >> test)
    {
        if(test==-1)
            break;

        while(test--)
        {
            cin >> depth >> I;

            int node=1;

            for(int i=0; i<depth-1; i++)
            {
                //if I is odd then node will be even otherwise odd
                if(I%2==0)
                {
                    node = (node * 2) + 1;
                    I = (I/2);
                }

                else
                {
                    node = (node * 2);
                    I = (I/2)+1;
                }

            }
            cout << node << endl;
        }
    }

    return 0;
}
