#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,j=0,n,c=0;
    char a[1000];
    gets(a);
    for(i;a[i]!='\0';i++)
    {
        if(a[0]<33 || a[0]>126 )
            c=1;
        if(a[i]=='H' || a[i]=='Q' || a[i]=='9'  )
            j=1;
    }
    if(j==1 && c==0)
        printf("YES");
    else
        printf("NO");

}
