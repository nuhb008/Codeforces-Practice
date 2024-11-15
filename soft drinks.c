#include<stdio.h>
int main()
{
    int n, k, l, c, d, p, nl, np,a,b,c1,d1,e,f,s=100000000000;
    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d1,&p,&nl,&np);
    a=(k*l)/nl;
    b=c*d1;
    c1=p/np;
    d=a/n;
    e=b/n;
    f=c1/n;
    if(d!=0 && e!=0 && f!=0 )
    {
        if(d<s)
        {
            s=d;
            if(e<s)
            {
                s=e;
                if(f<s)
                {
                    s=f;
                    printf("%d",s);
                }
                else
                    printf("%d",s);
            }
            else
            {
                if(f<s)
                {
                    s=f;
                    printf("%d",s);
                }
                else
                    printf("%d",s);
            }
        }
    }
    else
        printf("0");
}
