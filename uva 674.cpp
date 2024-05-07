#include<stdio.h>
long ways [10000];

void count ()
{
int coin [] = {1,5,10,25,50},i,j,cnt=0;
    ways [0] = 1;
    for (i = 0; i <5; i++ ) {
        for (j = coin [i]; j <10000; j++ )
            ways [j] += ways [j - coin [i]];

    }

}
int main ()
{
    count ();
    int n;
    while (scanf("%d",&n)!=EOF)
        printf("%d\n",ways[n]);
    return 0;
}
