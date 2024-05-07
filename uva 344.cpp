#include<stdio.h>
int i, v, x, l, c;

void f1(int n)
{
    if(n==1)i++;
    else if(n==2)i+=3;
    else if(n==3)i+=6;
    else if(n==4){
        i+=7, v++;
    }
    else if(n==5){
        i+=7, v+=2;
    }
    else if(n==6){
        i+=8, v+=3;
    }
    else if(n==7){
        i+=10, v+=4;
    }
    else if(n==8){
        i+=13, v+=5;
    }
    else if(n==9){
        i+=14, v+=5, x++;
    }
    else if(n==10){
         i+=14, v+=5, x+=2;
    }
}

void f2(int n)
{
    if(n>=30)
        x=x+22+12+2;
    else if(n>=20)
        x=x+12+2;
    else x+=2;

    int res, d;
    d = n/10;
    res = n%10;

    x+=(d*res);
    i+=(d*14);
    v+=(d*5);
    f1(res);
}

void f3(int n)
{
    i+=56, v+=20, x+=64;
    int res;
    if(n<50){
        res = n-40;
        x+=(res+1);
    }
    else {
        i+=14, v+=5, l+=10, x+=11;
        res = n-50;
    }
    l+=(res+1);

    if(res<11)
      f1(res);
    else
        f2(res);
}

void f4(int n)
{
    i += 126, v+=45, x+=139, l+=50;
    int res = n-90;
    if(n==100)
      x+=9;
    else
      x+=(res+1);
    c+=(res+1);
    f1(res);
}
int main()
{
    int n;
    while(scanf("%d",&n)){
        if(n==0)break;

        i=0, v=0, x=0, l=0, c=0;
        if(n<11)
           f1(n);
        else if(11<=n && n<40)
            f2(n);
        else if(40<=n && n<90)
            f3(n);
        else if(90<=n)
            f4(n);

        printf("%d: %d i, %d v, %d x, %d l, %d c\n",n,i,v,x,l,c);
    }
    return 0;
}
