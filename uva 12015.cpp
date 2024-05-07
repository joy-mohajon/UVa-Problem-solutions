#include <stdio.h>

int main()
{
    int n, i, j, t=1;
    int ar[10];
    char ch[10][150];

    scanf("%d",&n);
    while(n--){
        for(i=0;i<10;i++){
            scanf("%s %d",ch[i],&ar[i]);
        }


        for(i=0;i<10;i++){
            if(ar[i]>max)
               max = ar[i];
        }

         printf("Case #%d:\n",t++);
        for(i=0;i<10;i++){
            if(ar[i]==max)
                printf("%s\n",ch[i]);
        }
    }
    return 0;
}
