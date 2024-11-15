#include<stdio.h>

int f1(int a)
{
    int f,t=0;
    if(a==0)
        return 1;

    else
    {
    f=f2(a-1);
    t=f + t;
    f1(a-1);
    }
    return t;
}

int f2(int b)
{
    int f;
    if(b==0)
        return 1;
    else
    {
        f=f2(b-1)*b;
    }
    return f;
}


int main()
{
    int n,b;
    scanf("%d",&n);
    b=f1(n);
    printf("%d",b);
}
