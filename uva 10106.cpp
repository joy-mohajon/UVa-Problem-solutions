#include<stdio.h>
#include<string.h>

void multiply(char st1[],char st2[],char result[]){
	int len1,len2;
	int i,j,temp,carry;
	len1=strlen(st1);
	len2=strlen(st2);

	for(i=0;i<len1+len2;i++)
		result[i]='0';
	result[i]='\0';

	for(i=len1-1;i>=0;i--){
		for(j=len2-1,carry=0;j>=0;j--){
			temp=(st1[i]-'0')*(st2[j]-'0')+result[i+j+1]-'0'+carry;
			carry=temp/10;
			result[i+j+1]=(temp%10)+'0';
		}
		result[i]=carry+'0';
	}
	for(j=0;result[j]=='0';j++);
        if(j>=len1+len2)
            result[1]='\0';
        else{
            for(i=0;result[i]!='\0';i++)
                result[i]=result[i+j];
        }

}
int main(){
	char st1[100000];
	char st2[100000];
    char result[100000];
	while(gets(st1)){
		gets(st2);
		multiply(st1,st2,result);
		printf("%s\n",result);
	}
	return 0;
}
