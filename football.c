#include<stdio.h>>
#include<string.h>
int main()
{
    char a[100];
    gets(a);
    int i,c=1,j;
    for(i=0;a[i]!='\0';i++)
    {

        if(a[i]==a[i+1])
        {
            c++;
            if(c>=7)
                break;
        }
        else
            c=1;

    }
    //printf("%d",c);
    if(c>=7)
        printf("YES");
    else
        printf("NO");
}
