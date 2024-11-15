#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,c=0,c1=0,c2=0,c3=0,j,n;
    char a[10000],b[10000];
    scanf("%s",a);
    for(j=0;a[j]!='\0';j++)
    {
    if(a[j]=='h')
    {
        c++;
        if(c<=1)
        b[i++]=a[j];
        break;
    }
    }
    for(j;a[j]!='\0';j++)
    {
    if(a[j]=='e')
    {
        b[i++]=a[j];
        break;
    }
    }
    for(j;a[j]!='\0';j++)
    {
    if(a[j]=='l')
    {
        c2++;
        if(c2<=2)
        b[i++]=a[j];
        if(c2==2)
            break;
    }
    }
    for(j;a[j]!='\0';j++)
    {
    if(a[j]=='o')
    {
        b[i++]=a[j];
    }
    }
    if(b[0]=='h' && b[1]=='e' && b[2]=='l' && b[3]=='l' && b[4]=='o' )
    printf("YES");
    else
    printf("NO");
}




