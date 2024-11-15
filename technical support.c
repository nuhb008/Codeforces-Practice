#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,a,c1=0,c2=0;
    char b[500];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c1=0;
        scanf("%d",&a);
        scanf("%s",b);
        for(j=0;b[j]!='\0';j++)
        {

            if(b[j]=='Q')
                c1++;
            if(b[j]=='A')
            {
                c1-=1;
                 if(c1<0)
                  c1=0;
            }

        }
        if(c1>0)
            printf("NO\n");
        else
            printf("YES\n");

    }

}
