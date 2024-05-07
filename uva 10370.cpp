#include<stdio.h>

int main()
{
    int n,d,i,div;
    scanf("%d",&n);
    while(n--){
        double result,r;
        scanf("%d",&d);
        int ar[d],sum=0,k=0;
        for(i=0;i<d;i++){
            scanf("%d",&ar[i]);
            sum += ar[i];          /// find out avarege of the input data;
        }
        div = sum/d;
        for(i=0;i<d;i++){     ///find out the value greater than avarege'
            if(div<ar[i])k++;
        }
        r=d;
        result = (k/r)*100;   /// finding percentage of the values greater than avarege
        printf("%.3lf%%\n",result);
    }
    return 0;
}
