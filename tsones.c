#include<stdio.h>
int main()
{
    char a[500];
    int c=0,n;
    scanf("%d\n",&n);
    gets(a);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]==a[i+1])
            c++;
    }
    printf("%d",c);
}
