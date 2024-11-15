#include<stdio.h>
#include<math.h>
int main()
{
double a,b,c;
long long r;
scanf("%lf %lf %lf", &a,&b,&c);
r=ceil(a/c)*ceil(b/c);
printf("%lld",r);
}

