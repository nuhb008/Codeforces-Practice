#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(abs(a-b)%2)
        cout<<"Alice"<<endl;
        else
        cout<<"Bob"<<endl;
    }
}