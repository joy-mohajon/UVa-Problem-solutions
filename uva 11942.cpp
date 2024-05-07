#include<stdio.h>
int main()
{
    int n,ar[10],i,j;
    scanf("%d",&n);
    printf("Lumberjacks:\n");
    while(n--){
        for(i=0;i<10;i++){
           scanf("%d",&ar[i]);
        }
        int y=0;
        for(i=0;i<9;i++){
            if(ar[i]==ar[i+1]){
               y=1;
            }
            else{y=0;break;}
        }
        if(y==1)printf("Unordered\n");
        else if(y==0){
            int x=0;
            for(i=0;i<9;i++){
                if(ar[i]>=ar[i+1]){
                   x=1;
                }
                else{x=0;break;}
            }
            if(x==1){printf("Ordered\n");}
            else {
                for(i=0;i<9;i++){
                    if(ar[i]<=ar[i+1]){
                       x=1;
                    }
                    else{x=0;break;}
                }
                if(x==1){printf("Ordered\n");}
                else printf("Unordered\n");
            }
        }
        }

    return 0;
}
