#include<stdio.h>
#include<vector>
using namespace std;

int main()
{
    vector<int>numbers;
    numbers.push_back(0);
    for(int i=1;i<=10;i++)
    {
        numbers.push_back(i);
    }
    for(int n:numbers)
        cout<<n<<endl;
}
