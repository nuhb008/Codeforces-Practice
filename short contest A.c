#include<stdio.h>
#include<string.h>
int main()
{
    char a[500],b[500],c[500][500],d[500][500];
    int n,i,z=0,y=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    int x=0,j,k=0,l=0,s=0,f=0,g=0,m=0,t=0,r=0,e=0,q=0,w=0;
        scanf("%s %s",&a,&b);
        for(i=1;i<=12;i++)
        {

           int p=0;
           for(j=0;c[i][j]!='\0';j++)
           {
            if(c[i][j]==a[j])
            {
                p++;
            }
           }
                if(i==1 && p==strlen(a))
                    x=1;
                if(i==2 && p==strlen(a))
                    k=1;
                if(i==3 && p==strlen(a))
                    g=1;
                if(i==4 && p==strlen(a))
                    l=1;
                if(i==5 && p==strlen(a))
                    m=1;
                if(i==6 && p==strlen(a))
                    q=1;
                if(i==7 && p==strlen(a))
                    r=1;
                if(i==8 && p==strlen(a))
                    s=1;
                if(i==9 && p==strlen(a))
                    t=1;
                if(i==10 && p==strlen(a))
                    w=1;
                if(i==11 && p==strlen(a))
                    e=1;
                if(i==12 && p==strlen(a))
                    f=1;

        }
        if(x==0 && k==0 && l==0 && s==0 && f==0 && g==0 && m==0 && t==0 && r==0 && e==0 && q==0 && w==0 )
        {
        printf("%d\n",z);
            z++;
            y++;
            for(j=0;j<strlen(a);j++)
            {
                c[z][j]=a[j];
            }
            for(j=0;j<strlen(b);j++)
            {
                d[y][j]=b[j];
            }
        }
    }
    for(i=1;i<=12;i++)
    {
        for(int j=0;c[j]!='\0';j++)
        {

    printf("%c %c\n",c[i][j],d[i][j]);
        }
    }

}
