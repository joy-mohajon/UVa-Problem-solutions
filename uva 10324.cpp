#include<stdio.h>
#include<string.h>
int main()
{
    int n,l=1;
    char ch[1000010];
    while(scanf("%s",ch)==1){
        if(ch=="\0")break;
        printf("Case %d:\n",l++);

        scanf("%d",&n);
        int i, a, b;

        while(n--){
            scanf("%d %d",&a,&b);

            int flag = 0;
            if(a>b){
                int temp = a;
                 a = b;
                 b = temp;
            }
            for(i=a;i<=b;i++){
                if(ch[a]!=ch[i]){
                   flag = 1;
                   break;
                }
            }
            if(flag == 0)
                printf("Yes\n");
            else
                printf("No\n");
        }

    }
     return 0;
}
