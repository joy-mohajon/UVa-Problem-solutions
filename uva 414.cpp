#include<stdio.h>
#include<string.h>

int main()
{
    int n, i, j, l, len;
    while(scanf("%d",&n)){
            getchar();

        if(n==0)break;
        char ch[15][30];
        int start[13]={0}, end[13]={0};

        for(i=0;i<n;i++){
            gets(ch[i]);
        }

        for(i=0;i<n;i++){
            len = strlen(ch[i]);
            for(j=0;j<len;j++){
                if(ch[i][j]!='X')
                    end[i]=j+1;
            }
            for(l=len-1;l>=0;l--){
                if(ch[i][l]!='X')
                    start[i]=l+1;
            }
        }

        int result[n], min = 24756832;
        for(i=0;i<n;i++){
            result[i]=end[i]-start[i];
            if(min>result[i])
               min = result[i];
        }

        int cnt = 0;
        for(i=0;i<n;i++){
            cnt+=(result[i]-min);
        }

        for(i=0;i<n;i++){
            printf("%d %d %d\n",start[i],end[i],result[i]);
        }
        printf("%d\n",cnt);
    }
    return 0;
}

