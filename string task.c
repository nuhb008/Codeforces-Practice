#include<stdio.h>
#include<string.h>
int main()
{
    char a[100000],b[100000],c[100000];
    int j=0,n,i;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
         if(a[i]>=65 && a[i]<=90)
            a[i]+=32;
    }
    //puts(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u' && a[i]!='y')
        {
            while(a[i]!='\0')
            {
             b[j]=a[i];
             j++;
             break;
            }
        }
    }
    b[j]='\0';
    n=strlen(b);
    //puts(b);
    c[0]='.';
    j=0;
    for(i=1;i<2*n;i++)
    {
        if(i%2==0)
        {
          c[i]='.';
        }
        else
        {
            while(b[j]!='\0')
            {
            c[i]=b[j];
            j++;
            break;
            }
        }
    }
    printf("%s",c);
    return 0;
}
