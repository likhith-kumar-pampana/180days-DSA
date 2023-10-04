#include <iostream>
using namespace std;

int main()
{

    int n  =10;   // below this anything can use this variable in this block

    int i = 30;

    if(i==30)
    {
        int n = 20;     // here u can do this bcuz u r in a different block
                        // here n=20 lifetime of only in this smaller block
                        // first compiler looks for the local variabla and then the global one
        cout<<n;

        //int n =40   // this will give me error again as i am declaring in the same block with same name
    }


}
cout<<endl;

int main()
{

    int n =10;
    int i = 30;

    for(int i = 10; i <=30; i++)
    {
        cout<<i<<" ";
    }




}