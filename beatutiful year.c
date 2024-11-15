#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,j,n,c=0;
    char a[1000];
    scanf("%d",&n);
    for(i=1;;i++)
    {
    n=n+1;
    sprintf(a, "%d", n);
    //puts(a);
    c=0;
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
    }
    if(c>0)
    {
        continue;
    }
    else
        break;
    }
    puts(a);


}
