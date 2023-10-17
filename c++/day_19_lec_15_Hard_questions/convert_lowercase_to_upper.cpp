#include <iostream>
using namespace std;

char Convert(char name)
{
    char ans = name - 'a' + 'A';    // most important step

    return ans;
}

int main()
{
    char name;
    cin>>name;

    cout<<Convert(name)<<endl;
}