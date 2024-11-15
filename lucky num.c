#include<stdio.h>
int main()
{
    int i,c=0,j,a;
    scanf("%d",&a);
     while(a > 0) //do till num greater than  0
    {
        int mod = a % 10;  //split last digit from number
        if(a%10 ==7 || a%10 ==4  )
        {
            c++;
        }
        //printf("%d\n",mod); //print the digit.

        a = a / 10;    //divide num by 10. num /= 10 also a valid one
    }
    printf("%d",c);
    if(c==7 || c==4)
        printf("YES");
    else
        printf("NO");
}
