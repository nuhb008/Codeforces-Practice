#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>numbers;
    for(int i=1;i<=10;i++)
    {
        numbers.push_back(i);
    }
    for(int n:numbers)
    {
        cout<<n<<endl;
    }
}
