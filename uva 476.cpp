#include<bits/stdc++.h>

using namespace std;

typedef pair <double, double> pairs;

struct points{
    double up_l, up_r, low_l, low_r;
};

int main()
{
    vector <pairs> v_points;
    vector <points> v_rec;

    char ch;
    double a, b, c, d;

    while(cin >> ch){
        if(ch=='*')
            break;

        cin >> a >> b >> c >> d;
        //getchar();

        v_rec.push_back({a, b, c, d});
    }

    double x, y;
    while(cin >> x >> y){
        if(x==9999.9 && y==9999.9)
            break;

        v_points.push_back({x, y});
    }

    for(int i=0; i<v_points.size(); i++){
        int flag = 0;
        for(int j=0; j<v_rec.size(); j++){
            if(v_rec[j].up_l < v_points[i].first && v_rec[j].low_l > v_points[i].first && v_rec[j].up_r > v_points[i].second && v_rec[j].low_r < v_points[i].second){
                cout << "Point " << i+1 << " is contained in figure " << j+1 << endl;
                flag = 1;
            }
        }
        if(flag!=1)
            cout << "Point " << i+1 << " is not contained in any figure" << endl;
    }
    return 0;
}
