#include<stdio.h>
int main()
{
    int a,b,c,i,j=0,k,n,s=0,r;
    scanf("%d %d %d",&a,&b,&c);

    for(i=2;i<=100;i++)
    {
        if((a*i)%b==c)
        {
          printf("YES\n");
          s=1;
          break;
        }

    }

    if(s==0)
        printf("NO\n");



}
