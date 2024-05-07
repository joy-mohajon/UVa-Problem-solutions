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

    while(scanf("%d",&n)){
        if(n==0)break;
        int arr[10]={0};
        int res[max];
        int res_size = 1;
        res[0] = 1;

        for(i=2;i<=n;i++){
            res_size = multiplie(i, res, res_size);
        }

        printf("%d! --",n);
        for(i=res_size-1;i>=0;i--){
            arr[res[i]]++;
        }

        printf("\n");
        printf("   (0)%5d     (1)%5d     (2)%5d     (3)%5d     (4)%5d\n",arr[0],arr[1],arr[2],arr[3],arr[4]);
        printf("   (5)%5d     (6)%5d     (7)%5d     (8)%5d     (9)%5d\n",arr[5],arr[6],arr[7],arr[8],arr[9]);
    }
    return 0;
}
