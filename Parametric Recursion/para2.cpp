//this algorithm print sum of n number using i+1
#include<iostream>
using namespace std;

void myFunction(int i,int sum)
{
    if (i < n)
    {
        cout<<sum;
        return;
    }

    myFunction(i+1,sum+i);
}

int main()
{
    int n;
    cin>>n;
    myFunction(1,0);


return 0;
}