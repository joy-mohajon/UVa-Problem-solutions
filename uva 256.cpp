#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,j,l,k,s;
    while(scanf("%d",&n)!=EOF){
        if(n==2){
            printf("00\n01\n");
            for(i=1;i<=9;i++){    /// find sequence 00 to 99
                for(j=0;j<=9;j++){
                    l=i*10;          ///condition cheaking (i+j)^2 == (i*10)+j   ///example : (8(i) + 1(j))^2 = 81
                    k = (i+j)*(i+j);
                    if((l+j)==k){
                        printf("%d\n",l+j);
                    }
                }
            }
        }
        else if(n==4){
            printf("0000\n0001\n");
            for(i=1;i<=99;i++){      /// find sequence 0000 to 9999
                for(j=0;j<=99;j++){
                    l=i*100;
                    k = (i+j)*(i+j);
                    if((l+j)==k){            ///example : (30(i) + 25(j))^2 = 3025
                        printf("%d\n",l+j);
                    }
                }
            }
        }
        else if(n==6){
            printf("000000\n000001\n");
            for(i=1;i<=999;i++){     /// find sequence 000000 to 999999
                for(j=0;j<=999;j++){
                    l=i*1000;
                    k = (i+j)*(i+j);
                    if((l+j)==k){
                        if(i<100)printf("0");
                        printf("%d\n",l+j);
                    }
                }
            }
        }
        else if(n==8){
            printf("00000000\n00000001\n");
            for(i=1;i<=9999;i++){      /// find sequence 00000000 to 99999999
                for(j=0;j<=9999;j++){
                    l=i*10000;
                    k = (i+j)*(i+j);
                    if((l+j)==k){
                        if(i<1000)printf("0");
                        printf("%d\n",l+j);
                    }
                }
            }
        }

    }
    return 0;
}
