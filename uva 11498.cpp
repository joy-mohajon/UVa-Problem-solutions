#include<stdio.h>

int main()
{
    int n,a,b,i;
    while(scanf("%d",&n)){
       if(n==0)break;
    int x[n+5],y[n+5];
    scanf("%d %d",&a,&b);
    for(i=0;i<n;i++){
        scanf("%d %d",&x[i],&y[i]);
    }
    for(i=0;i<n;i++){
        if(x[i]==a || b==y[i])printf("divisa\n");
       else if(a<x[i] && b<y[i]){printf("NE\n");}
       else if(a>x[i] && b<y[i])printf("NO\n");
       else if(a>x[i] && b>y[i])printf("SO\n");
       else if(a<x[i] && b>y[i])printf("SE\n");

    }
    }
    return 0;

}
