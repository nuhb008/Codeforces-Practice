#include<stdio.h>
int main()
{
    int i,s=0,s1=0,s2=0,n,a,b,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        s=s+a;
        s1=s1+b;
        s2+=b;
    }
    if(s==0 && s1==0 && s2==0)
        printf("YES");
    else
        printf("NO");
}
