#include<stdio.h>
int main()
{
    int pa,bu,h,w;
    while(scanf("%d %d %d %d",&pa,&bu,&h,&w)!=EOF){
        int we[w],budg,l=0,i,j,taka = 600000;
        for(i=0;i<h;i++){
            int k=0;
            scanf("%d",&budg);
            for(j=0;j<w;j++){
                scanf("%d",&we[j]);
            }
            for(j=0;j<w;j++){
                if(pa<=we[j]){k=1;break;}
            }
            if(k==1){
                budg*=pa;
                if(budg<=bu){
                    if(budg<taka){taka = budg;l=1;}
                }
            }
        }
        if(l==1)printf("%d\n",taka);
        else printf("stay home\n");
    }
    return 0;
}
