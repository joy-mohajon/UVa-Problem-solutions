#include<bits/stdc++.h>

using namespace std;

typedef pair <int, int> pairs;
deque <pairs> dqJ;
deque <pairs> dqF;

int r, c, cnt_J, cnt_F;
char (*maze)[1010] = new char[1010][1010];

int fire(int mov)
{
    if(mov<0 || dqF.empty())
        return cnt_F;

    int a = dqF.front().first;
    int b = dqF.front().second;

    if(maze[a][b]!='#')
    {
        int arr[4]= {a-1, a+1, b-1, b+1};
        if(arr[0]>=0 && maze[arr[0]][b]!='#' && maze[arr[0]][b] != 'F')
        {
            cnt_F++;
            maze[arr[0]][b] = 'F';
            dqF.push_back({arr[0], b});
        }
        if(arr[1]<r && maze[arr[1]][b]!='#' && maze[arr[1]][b]!='F')
        {
            cnt_F++;
            maze[arr[1]][b] = 'F';
            dqF.push_back({arr[1], b});
        }
        if(arr[2]>=0 && maze[a][arr[2]]!='#' && maze[a][arr[2]]!='F')
        {
            cnt_F++;
            maze[a][arr[2]] = 'F';
            dqF.push_back({a, arr[2]});
        }
        if(arr[3]<c && maze[a][arr[3]]!='#' && maze[a][arr[3]]!='F')
        {
            cnt_F++;
            maze[a][arr[3]] = 'F';
            dqF.push_back({a, arr[3]});
        }
    }
    dqF.pop_front();
    fire(mov-1);
    return cnt_F;
}

int joe(int mov)
{
    if(mov<0 || dqJ.empty())
        return cnt_J;

    int a = dqJ.front().first;
    int b = dqJ.front().second;

    if(a==0 || a==r-1 || b==0 || b==c-1)
        if(maze[a][b]=='.' || maze[a][b]=='J')
        {
            cnt_J = -1;
            return cnt_J;
        }


    if(maze[a][b]!='F' && maze[a][b]!='#')
    {
        int arr[4]= {a-1, a+1, b-1, b+1};
        if(arr[0]>=0 && maze[arr[0]][b]=='.')
        {
            cnt_J++;
            maze[arr[0]][b] = 'J';
            dqJ.push_back({arr[0], b});
        }
        if(arr[1]<r && maze[arr[1]][b]=='.')
        {
            cnt_J++;
            maze[arr[1]][b] = 'J';
            dqJ.push_back({arr[1], b});
        }

        if(arr[2]>=0 && maze[a][arr[2]]=='.')
        {
            cnt_J++;
            maze[a][arr[2]] = 'J';
            dqJ.push_back({a, arr[2]});
        }
        if(arr[3]<c && maze[a][arr[3]]=='.')
        {
            cnt_J++;
            maze[a][arr[3]] = 'J';
            dqJ.push_back({a, arr[3]});
        }
    }


    dqJ.pop_front();

    joe(mov-1);

    return cnt_J;
}

int main()
{
    int t;

    cin >> t;
    while(t--)
    {
        int n=0;

        cin >> r >> c;

        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                cin >> maze[i][j];
                if(maze[i][j]=='J')
                    dqJ.push_back({i, j});
                else if(maze[i][j]=='F')
                {
                    dqF.push_back({i, j});
                    n++;// counting fire square
                }

            }
        }

        int mov=1, time=1, flag=0;
        while(!dqJ.empty())
        {
            cnt_J = 0, cnt_F = 0;

            int cnt=1;

            mov = joe(mov-1);//return total moves for every time of Joe

            if(mov==-1)
            {

                flag = 1;
                break;
            }
            else if(mov==0)
            {

                break;
            }


            if(!dqF.empty())
            {
                // fire's moves

                n = fire(n-1);//return total moves for every time of Fire
            }
            time++;

        }

        if(flag==0)
        {
            cout << "IMPOSSIBLE" << endl;

        }

        else if(flag==1)
            cout << time << endl;

        dqJ.clear();
        dqF.clear();
    }
    return 0;
}

