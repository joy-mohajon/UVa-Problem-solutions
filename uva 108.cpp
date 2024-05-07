#include<stdio.h>
int main()
{
    int i,j,n,s=0,k,p,l,a,b;
    scanf("%d",&n);
    int arr[100][101];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);

        }
    }p=arr[0][0];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           if(p<arr[i][j]){p=arr[i][j];}
        }
    }
    for(a=0;a<n;a++){
        for(b=0;b<n;b++){
            for(i=a;i<n;i++){
                for(j=b;j<n;j++){
                    for(l=a;l<=i;l++){
                        for(k=b;k<=j;k++){
                            s+=arr[l][k];
                        }
                    }
                    if(p<s){p=s;}s=0;
                }
            }
        }
    }
    printf("%d\n",p);
    return 0;
}
