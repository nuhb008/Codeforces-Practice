#include<stdio.h>
#include<string.h>
int main()
{
    int n,m,j,f=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        char a[5000];
        scanf("%d",&m);
        scanf("%s",&a);
        f=0;
        int c=0,b=0;
        for(j=0;a[j]!='\0';j++)
        {
        if(a[0]=='1')
        {
            if(a[j]=='1')
                c++;
            else
            {
                b++;
                if(a[j+1]=='1')
                    f=1;

            }

        }
        else
        {
            if(a[0]=='0')
        {
            if(a[j]=='0')
                b++;
            else
            {
                c++;
                if(a[j+1]=='0')
                    f=0;

            }

        }
        }

        }
        if(f==0 && b>c)
            printf("%d",b*b);
        if(f==0 && b<c)
            printf("%d",c*c);
        if(f==1)
            printf("%d",b*c);
        printf("\n");
    }
}
