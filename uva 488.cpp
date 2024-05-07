#include<stdio.h>

int main()
{
    int n, am, fr;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&am,&fr);

        while(fr--){

            int i, j, flag=0;

            for(i=1;i>=1;){
                if(i==am)
                   flag =1;

                for(j=0;j<i;j++){
                    printf("%d",i);
                }
                printf("\n");

                if(flag == 1)
                    i--;
                else
                    i++;

            }if(fr!=0)printf("\n");
        }if(n!=0)printf("\n");
    }
    return 0;
}
