#include<iostream>
using namespace std;

int main()
{  // dont run this code, just look as examples

    for(int count = 1; count <= 5; count = count+1)
    {
        cout<<"coder army\n";
    }
// hello 10 times
    for(int i = 1; i<=10; i++)
    {
        cout<<"hello\n";
    }

    // n natural numbers

    // int n;
    // cin>>n;

    // for(int count =1; count<=n; count++ )
    // {
    //     cout<<count<<endl;
    
    // for square u just multiply in cout

    // int n;
    // cout<<"enter the number: ";
    // cin>>n;

    // for(int count =1; count<=n; count++ )
    // {
    //     cout<<count<<" the square of the number is: "<<count*count<<endl;
    // }


    // all even numbers upto n


    int num;
    cout<<"enter upto what number: "<<endl;
    cin>>num;

    for(int g = 2; g<=num; g = g +2)   // initializing from 2 and just adding 2 each step
    {
        cout<<g<<endl;
    }

    // u can do this also by having if else inside for loop like this
    
    for(int k =1; k<=n; k=k+1)
    {
        if(k%2==0)
        {
            cout<<k<<endl;
        }
        else
        {               // for odd u dont need to do anything
        }
    }


}