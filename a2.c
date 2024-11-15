#include<stdio.h>
int main()
{
    char a[1000005];
    long long n=0,i=0,c1=0;
    gets(a);
    while(a[i]!='\0')
    {
        if(a[i]==a[i+1])
        {
            c1++;
            if(c1>=n)
            n=c1;
        }
        else
            c1=0;

        i++;

    }
    printf("%d",n+1);

}
