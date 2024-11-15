#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,c=0,j,n;
    char a[1000000];
    scanf("%d",&n);
    scanf("%s",a);
    for(j=0;a[j]!='\0';j++)
    {
    if(a[j]=='D')
    {
        i++;
    }
    else if(a[j]=='A')
    {
        c++;
    }

    }
    //rintf("%d",c);
    if(i>c)
    printf("Danik");
    else if(i<c)
    printf("Anton");
    else
        printf("Friendship");
}


