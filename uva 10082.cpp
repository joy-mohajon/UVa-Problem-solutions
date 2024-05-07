#include<stdio.h>
int main()
{
    char ch[] = {'`','1','2','3','4','5','6','7','8','9','0','-','=',
              'Q','W','E','R','T','Y','U','I','O','P','[',']',92,'A','S','D','F','G','H','J','K','L',';','\'',
              'Z','X','C','V','B','N','M',',','.','/'};
    char c;
    int i;
    while((c = getchar())!=EOF){
        if(c==' ')printf("%c",c);
        else if(c=='\n')printf("%c",c);
        else {
            for(i=0;i<strlen(ch);i++){
                if(ch[i]==c){
                    printf("%c",ch[i-1]);
                    break;
                }
            }
        }
    }
    return 0;
}
