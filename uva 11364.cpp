#include<stdio.h>

int main()
{
    int n,p,i;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&p);
        int max = 500,min = 0,d;
        for(i=0;i<p;i++){     ///find out maximum and minimum integer point
            scanf("%d",&d);
            if(max>d){max = d;}
            if(min<d){min = d;}
        }
        printf("%d\n",(min-max)*2);   /// (*2) for 2 times updown;
    }
    return 0;
}
