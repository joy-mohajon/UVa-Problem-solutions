#include<stdio.h>

int main()
{
    int n,len,ln,k,i,j;
    char st[10],ch[10][10] ={"one","two","three","four","five","six","seven","eight","nine","ten"};
    scanf("%d",&n);

    while(n--){
        scanf("%s",st);
        len = strlen(st);
        for(i=0;i<10;i++){
            ln = strlen(ch[i]);k=0;/// find out length of string of ch array;
            if(len == ln){
               for(j=0;j<ln;j++){  ///comparison between input string and array of ch;
                  if(ch[i][j]==st[j]){k++;}
               }
               if(k == len-1 || k == len){printf("%d\n",i+1);break;}
            }
        }
    }
    return 0;
}
