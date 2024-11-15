#include<stdio.h>
#include<stdio.h>
int main()
{
    char a[1000005],b[1000005];
    int i,j,n,c=0,l,k=0;
    scanf("%d",&n);
    scanf("%s",a);
    scanf("%s",b);
    for(i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            if(a[i]==b[i+1] && a[i+1]==b[i])
            {
            c++;
            i++;


            }
           else
            c++;


        }
    }
    printf("%d",c);
}
