#include<stdio.h>
#include<string.h>

int main()
{
    char ch[250];
    int i, j;
    while(gets(ch)){
        if(strcmp(ch,"e/o/i")==0)break;
        int cnt = 0, count = 0, flag=0;

        for(i=0;i<strlen(ch);i++){
            if(ch[i]=='a' ||ch[i]=='e' ||ch[i]=='i' ||ch[i]=='o' ||ch[i]=='u' ||ch[i]=='y'){
                if(i==0){count++;}
                else if(ch[i-1]!='a' &&ch[i-1]!='e' &&ch[i-1]!='i' &&ch[i-1]!='o' &&ch[i-1]!='u' &&ch[i-1]!='y'){
                    count++;}
                //ch[i]='*';
            }
            else if(ch[i]=='/'){
                cnt++;
                //printf("count %d\n",count);
                }

            if(cnt == 1 ){
                if(count==5)
                   count=0;
                else {flag = 1;break;}
                cnt = -2;
            }
            else if(cnt == -1 ){
                if(count==7)
                   count=0;
                else {flag = 1;cnt = 2;break;}
                cnt = 0;
            }
        }
        if(cnt!=1 && cnt!=2){
            if(count == 5)
                flag = 0;
            else flag=1,cnt=3;
        }
        if(flag==0)
            printf("Y\n");
        else printf("%d\n",cnt);
    }
    return 0;
}


