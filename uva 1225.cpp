#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n,i,len,num[10],k,value,j;
    char ch[6];
    scanf("%d",&value);
    for(k=0; k<value; k++)
    {
        scanf("%d",&n);
        for(i=0; i<10; i++)
        {
            num[i]=0;
        }
        for(i=1; i<=n; i++)
        {
            sprintf(ch,"%d",i);
            len = strlen(ch);
            for(j=0; j<len; j++)
            {
                if(ch[j]=='0')
                {
                    num[0]++;
                }
                else if(ch[j]=='1')
                {
                    num[1]++;
                }
                else if(ch[j]=='2')
                {
                    num[2]++;
                }
                else if(ch[j]=='3')
                {
                    num[3]++;
                }
                else if(ch[j]=='4')
                {
                    num[4]++;
                }
                else if(ch[j]=='5')
                {
                    num[5]++;
                }
                else if(ch[j]=='6')
                {
                    num[6]++;
                }
                else if(ch[j]=='7')
                {
                    num[7]++;
                }
                else if(ch[j]=='8')
                {
                    num[8]++;
                }
                else if(ch[j]=='9')
                {
                    num[9]++;
                }
            }
        }
        printf("%d",num[0]);
        for(i=1; i<10; i++)
        {
            printf(" %d",num[i]);
        }
        printf("\n");
    }
    return 0;
}
