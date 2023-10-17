#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[5]= {1,3,4,5,6};

    int ans = INT_MAX;   // most important part

    for(int i=0; i<5; i++)
    {
        if(arr[i] < ans)
        {
            ans = arr[i];
        }
    }

    cout<<ans<<endl;

    // Max value
    ans = INT_MIN;   // most important part

    for(int i=0; i<5; i++)
    {
        if(arr[i] > ans)
        {
            ans = arr[i];
        }
    }

    cout<<ans<<endl;
    return 0;
}