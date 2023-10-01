#include<iostream>
using namespace std;

int main()
{
    int n,i,fact=1;
    // think why if u enter n =50, it will give u 0
    cout<<"enter the num: ";
    cin>>n;

    for(i=1; i<=n; i++)   // u can start i from 1 or 2 in this case
    {
        fact = fact*i;
    }

    cout<<fact<<endl;
}