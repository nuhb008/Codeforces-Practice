#include<stdio.h>

void f1(int n,char x,char y,char z)
{
    if(n==1)
        printf("%c > %c \n",x,z);
    else
    {
        f1(n-1,x,z,y);
        printf("%c > %c \n",x,z);
        f1(n-1,y,x,z);
    }
}

int main()
{
    int n;
    char a='A',b='B',c='C';
    scanf("%d",&n);
    f1(n,a,b,c);
}

