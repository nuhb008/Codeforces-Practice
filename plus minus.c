#include<stdio.h>
int main()
{
    int i,j,n,b,c=0;
    scanf("%d",&n);
    char ch[10000];
    for(j=1;j<=n;j++)
    {

        scanf("%d",&b);
        scanf("%s",&ch);
        if(ch[0]=='1')
        c=1;
        else
            c=0;

    for(i=0;i<strlen(ch)-1;i++)
    {

        if(ch[i+1]=='1' )
        {
            c++;
        if(c%2==0)
                {
                    printf("-");
                }
        }
        if(ch[i+1]=='0' || c%2!=0)
              printf("+");


    }
    printf("\n");
    }
}
