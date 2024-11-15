#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int i,j,k=0,c=0;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=97 && a[i]<=122)
        {
            k++;
        for(j=i+1;a[j]!=0;j++){
            if(a[i]==a[j])
            {
                c++;
                break;
            }

        }
        }
    }
    printf("%d",k-c);
}
