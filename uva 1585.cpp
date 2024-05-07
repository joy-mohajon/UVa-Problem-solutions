#include<stdio.h>
#include<string.h>

int main()
{
   int n,k=0,sum=0,len,i,j;
   char str[85];
   scanf("%d",&n);
   for(i=0;i<n;i++){
    scanf("%s",str);
    len = strlen(str);
    for(j=0;j<len;j++){
        if(str[j]=='O'){
            k++;sum+=k;//printf("%d ",sum);
        }
        else k=0;
    }
    printf("%d\n",sum);sum=0;k=0;
   }
   return 0;
}
