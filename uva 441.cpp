#include <stdio.h>

int main()
{
    int cnt = 0;
    int n, i, a, b, c, d, e, f, g, h;
    while(scanf("%d",&n)){
        if(n==0)break;
        if(cnt>0)
            printf("\n");

        int ar[n];

        for(i=0;i<n;i++){
            scanf("%d",&ar[i]);
        }

        for(a=0;a<n-5;a++){
            for(b=a+1;b<n-4;b++){
                for(c=b+1;c<n-3;c++){
                    for(d=c+1;d<n-2;d++){
                        for(e=d+1;e<n-1;e++){
                            for(f=e+1;f<n;f++){
                                printf("%d %d %d %d %d %d\n",ar[a],ar[b],ar[c],ar[d],ar[e],ar[f]);
                            }
                        }
                    }
                }
            }
        }
       cnt++;
    }
    return 0;
}
