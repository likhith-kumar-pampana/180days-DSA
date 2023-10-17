#include <iostream>
using namespace std;


int Sum(int m, int n)   // declaring a function
{
    int ans = m + n;       /// defining a function
    return ans;

}

// multiply function
int Mul(int m, int n)
{
    int ans = m*n;
    return ans;
}

// function with void, it doesn't return anything

void fun()
{
    cout<<"hello hahahahaha \n";
}

int main()
{
    int a, b;
    cout<<"enter two numbers: ";

    cin>>a>>b;

    // calling a function

    cout<<Sum(a,b);     // u can modify the Sum func to print in the func itself, so no need for it to return anything (void) and u can just call the func here without cout
    cout<<endl;

    cout<<Mul(a,b);
    cout<<endl;

    fun();




}