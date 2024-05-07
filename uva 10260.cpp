#include<stdio.h>

int main()
{
    char ch[25];
    int i,j,k;
    while(scanf("%s",ch)!=EOF){k=10;
         for(i=0;i<strlen(ch);i++){
            if(ch[i]=='B' || ch[i]=='F' || ch[i]=='P' || ch[i]=='V'){
                if(k!=0)printf("1");
                k = 0;
            }
            else if(ch[i]=='C' || ch[i]=='G' || ch[i]=='J' || ch[i]=='K' || ch[i]=='Q' || ch[i]=='S' || ch[i]=='X' || ch[i]=='Z'){
                if(k!=1)printf("2");
                k = 1;
            }
            else if(ch[i]=='D' || ch[i]=='T'){
                if(k!=2)printf("3");
                k = 2;
            }
            else if(ch[i]=='L'){
                if(k!=3)printf("4");
                k=3;
            }
            else if(ch[i]=='M' || ch[i]=='N'){
                if(k!=4)printf("5");
                k=4;
            }
            else if(ch[i]=='R'){
                if(k!=5)printf("6");
                k=5;
            }
            else k=6;
         }printf("\n");
    }
    return 0;
}
