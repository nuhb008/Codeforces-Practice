#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    long long int n,t,a=0,b,i;
    scanf("%l64d %l64d",&n,&t);
    i=pow(10,(n-1))*t;
    for(i+1;i<pow(10,n);i++)
    {
        if(i%t==0)
        {
            a=1;
            break;
        }
    }
    if(a==1)
        printf("%l64d",i);
    else
        printf("-1");
}
