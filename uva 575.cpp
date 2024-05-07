
#include<stdio.h>
#include<string.h>
#include<math.h>




int main()
{
    long long int n,s=0;
    int i,len,k;
    char ch[50];
    while(scanf("%s",&ch)){
            if(ch[0]=='0'){break;}
            s=0;
        len = strlen(ch);
        k = len;

        for(i=0;i<len;i++){
            if(ch[i]=='1'){s+=(pow(2,k)-1);}
            else if(ch[i]=='2'){s+=(2*(pow(2,k)-1));}
            k--;
        }
        printf("%lld\n",s);
    }

   return 0;
}

