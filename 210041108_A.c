#include<stdio.h>
int main()
{
    char a[1000005];
    long long n=1,b=1,c=1,d=1,i=1,c1=1,c2=1,c3=1,c4=1,maxc=0;
    gets(a);
    while(a[i]!='\0')
    {
        if(a[i]=='A' && a[i+1]=='A')
            {
            c1++;
            if(c1>=n)
            n=c1;
        }

        else if(a[i]=='C' && a[i+1]=='C')
            {
            c2++;
            if(c2>=b)
            b=c1;
        }

        else if(a[i]=='G' && a[i+1]=='G')
            {
            c3++;
            if(c3>=c)
            c=c3;
        }

        else if(a[i]=='T' && a[i+1]=='T')
            {
            c4++;
            if(c4>=d)
            d=c4;
        }
        i++;
    }

    if(n>=c2 && n>=c3 && n>=c4)
    {
        maxc=n;
    }
    else if(b>=c3 && b>=c1 && b>=c4)
    {

            maxc=b;
    }
    else if(c>=c4 && c>=c1 && c>=c2)
    {
        maxc=c;
    }
    else{
        maxc=d;
    }

    printf("%lld",maxc);


}


