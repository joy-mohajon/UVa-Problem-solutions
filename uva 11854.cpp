#include<stdio.h>
int main()
{
    int a[3],min = 60000,max = -5,i,mid;
    while(scanf("%d %d %d",&a[0],&a[1],&a[2])){
        min = 60000;max = -5;
        if(a[0]==0 && a[1]==0 && a[2]==0)break;
        for(i=0;i<3;i++){
            if(max<a[i])max = a[i];
            if(min>a[i])min = a[i];
        }
        for(i=0;i<3;i++){
            if(a[i] == max || a[i]==min)continue;
            else mid = a[i];
        }

        if((min*min + mid*mid)== max*max)
            printf("right\n");
        else printf("wrong\n");
    }
    return 0;
}
