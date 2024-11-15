#include<stdio.h>
#include<string.h>
int myFunc(char* str, char c)
{
    char* ptr;
    int index,m=0;

    ptr = strchr(str, c);
    index = ptr - str;
    str[index]='-1';

    return index;


}
int main()
{
    int i,j,n,n2,m=0,k,s=0;
    scanf("%d",&n);
    char a[200005],b[200005],c[200005];
    scanf("%s",b);
    scanf("%d",&n2);
    for(i=1;i<=n2;i++)
    {
        scanf("%s",&a);
        //strcpy(c,b);
        for(j=0;b[j]!='\0';j++)
        {
            c[j]=b[j];

        }
        //puts(c);
        m=0;
        for(j=0;a[j]!='\0';j++)
        {
            s=myFunc(c,a[j]);
            if(m<s)
                m=s;

        }

    printf("%d\n", m+1);
    }
}
