#include <stdio.h>
#include <math.h>
int main()
{
    long long int rem,rev=0,rnum=0;
    long long int n,an,i,e,f,g,h,j,k,l;
    for(i=1;i<=2;i++){
    rem=rev=rnum=0;
    scanf("%lld",&n);
    an=n;
    while(n>0)
    {
        rem=n%10;
        if(rem!=0)
        {
        rev=rev*10+rem;
        }
        n=n/10;
    }
    while(rev>0)
    {
        rem=rev%10;
        rnum=rnum*10+rem;
        rev=rev/10;
    }
    if(i==1){
        e=an;
        f=rnum;
    }
    else{
        g=an;
        h=rnum;
    }
    }
    j=e+g;
    l=h+f;
    rev=0,rnum=0,rem=0;
    while(j>0)
    {
        rem=j%10;
        if(rem!=0)
        {
        rev=rev*10+rem;
        }
        j=j/10;
    }
    while(rev>0)
    {
        rem=rev%10;
        rnum=rnum*10+rem;
        rev=rev/10;
    }
    k=rnum;
    if(k==l)
        printf("YES");
    else
        printf("NO");

}

