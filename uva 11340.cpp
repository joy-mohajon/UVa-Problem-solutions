#include<stdio.h>
#include<string.h>

double calculate(int ar[],int k,char ch[],char st[])
{
    int i,j;
    double sum=0.0;
    for(i=0;i<strlen(st);i++){
        for(j=0;j<k;j++){
            if(st[i]==ch[j]){
                sum+=ar[j];
                break;
            }
        }
    }
    return sum;
}
int main()
{
    int n,i,j,k,m;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%*c",&k);
        int ar[k+5];
        double sum = 0.0;
        char ch[k+5];
        for(j=0;j<k;j++){
            scanf("%c %d%*c",&ch[j],&ar[j]);
        }
        scanf("%d%*c",&m);
        char st[10010];

        for(j=0;j<m;j++){
            gets(st);
            sum+=calculate(ar,k,ch,st);
        }
        printf("%.2lf$\n",sum/100);
    }
    return 0;
}
