#include<stdio.h>
int main()
{
    int a,n,i,s=0,s2=0,s3=0,s4=0,t=0,r=0,d=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a==4)
        s++;
        if(a==3)
            s2++;
        if(a==2)
        s3++;
        if(a==1)
        s4++;
    }
    if(s3)
    {
    t=s3/2;
    r=s3%2;
    s+=t;
    }
    if(r)
    {
        s4-=2;
        s++;
    }
    s+=s2;
    if(s4>s2)
    {
        d=s4-s2;

        if(d%4)
            s+=(d/4)+1;
        else
            s+=d/4;

    }


    printf("%d",s);

}
