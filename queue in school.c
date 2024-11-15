#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,x,y,l=0;
    char a[10000],b[10000];
    scanf("%d %d",&x,&y);
    scanf("%s",a);
    b[0]=a[0];
    for(i=1;i<=y;i++)
    {
        for(j=1;a[j]!='\0';)
        {
            if(a[j-1]=='B' && a[j]=='G')
            {
                a[j]='B';
                a[j-1]='G';
                j+=2;
            }
            else
            {
                a[j]=a[j];
                a[j-1]=a[j-1];
                j++;

            }

        }
    }
    printf("%s",a);
}

