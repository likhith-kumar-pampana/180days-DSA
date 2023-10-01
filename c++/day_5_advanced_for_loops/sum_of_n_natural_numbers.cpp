#include<iostream>
using namespace std;

int main()
{
    int n,i,sum;
    cout<<"enter the number: ";
    cin>>n;

    sum = 0;
    for(i = 1; i<=n; i = i + 1)
    {
        sum = sum + i;
    }
    cout<<sum <<endl;

    // u can get better performance without using for loop and directly using formula n*n+1/2
}