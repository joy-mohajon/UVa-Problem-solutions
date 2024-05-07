#include<stdio.h>
#include<string.h>
#define max 100000


int multiplie(int x, int res[], int res_size)
{
    int i, m, carry=0;
    for(i=0;i<res_size;i++){
        m = (res[i] * x) + carry;
        res[i] = m%10;
        carry = m/10;
    }
    while(carry){
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}

int main()
{
    int n, i, j;

    while(scanf("%d",&n)==1){

        int res[max];
        int res_size = 1;
        res[0] = 1;

        for(i=2;i<=n;i++){
            res_size = multiplie(i, res, res_size);
        }

        int sum=0;
        for(i=0;i<res_size;i++){
            sum+=res[i];
        }
        printf("%d\n",sum);
    }
    return 0;
}
