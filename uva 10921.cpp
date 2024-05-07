#include<stdio.h>
#include<string.h>

int main()
{
    int len,i;
    char ch[40];
    while(scanf("%s",ch)!=EOF){
        len = strlen(ch);
        for(i=0;i<len;i++){
            if(ch[i]=='-'){
                printf("-");
            }
            else if(ch[i]=='1' || ch[i]=='2' || ch[i]=='3' || ch[i]=='4' || ch[i]=='5' || ch[i]=='6' || ch[i]=='7' || ch[i]=='8' || ch[i]=='9' || ch[i]=='0'){
                printf("%c",ch[i]);
            }
            else if('A'<=ch[i] && ch[i]<='C'){
                printf("2");
            }
            else if('D'<=ch[i] && ch[i]<='F'){
                printf("3");
            }
            else if('G'<=ch[i] && ch[i]<='I'){
                printf("4");
            }
            else if('J'<=ch[i] && ch[i]<='L'){
                printf("5");
            }
            else if('M'<=ch[i] && ch[i]<='O'){
                printf("6");
            }
            else if('P'<=ch[i] && ch[i]<='S'){
                printf("7");
            }
            else if('T'<=ch[i] && ch[i]<='V'){
                printf("8");
            }
            else if('W'<=ch[i] && ch[i]<='Z'){
                printf("9");
            }
        } printf("\n");
    }
    return 0;
}
