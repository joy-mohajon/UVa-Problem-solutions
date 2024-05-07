//#include<stdio.h>
#include<iostream>
#include<cstring>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j;
    scanf("%d",&n);
    string ch,st[100];
    for(i=0;i<n;i++){
        cin>>ch[i];

        //gets(ch[i]);
        //scanf("%[^\n]",&ch[i]);
    }

    /*for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(strcmp(ch[j],ch[j+1])>0){
                strcpy(st,ch[j]);
                strcpy(ch[j],ch[j+1]);
                strcpy(ch[j+1],st);
            }
        }
    }*/
    for(i=0;i<n;i++){
        printf("%s\n",ch[i]);
    }
    return 0;
}
