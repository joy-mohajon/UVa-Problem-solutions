#include<stdio.h>
int limit(int A,unsigned int a,int b,unsigned int k,int i)
{
    if(a==1){
        k++;
        printf("Case %d: A = %d, limit = %d, number of terms = %u\n",i,A,b,k);
        return;
    }
    else if(a>b){
        printf("Case %d: A = %d, limit = %d, number of terms = %u\n",i,A,b,k);
        return;
    }
    if(a%2==0){a/=2;}
    else {
        a=(3*a)+1;
    }
    k++;
     limit(A,a,b,k,i);

}
int main()
{
    int A,b,i=1;
    while(scanf("%d %d",&A,&b)){
        unsigned int k=0,a = A;
        if(A<0&& b<0)break;
        limit(A,a,b,k,i);
        i++;
    }
    return 0;
}
