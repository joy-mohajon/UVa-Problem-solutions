#include<stdio.h>
int main()
{
    double h, m, angle_1, angle_2, angle;
    while(scanf("%lf:%lf",&h,&m)){
        if(h==0 && m==0)break;

        angle_1 = (h*360/12)+((m*360)/(12*60));
        angle_2 = m*360/60;

        if(angle_1>=angle_2)
           angle = angle_1 - angle_2;
        else if(angle_1<angle_2)
           angle = angle_2 - angle_1;

        if(angle>180)
            angle=360-angle;

        printf("%.3lf\n",angle);
    }
    return 0;
}
