#include<iostream>
using namespace std;
int main()
{
    int n,diamonds;
    cout<<"Enter largestno:";
    cin>>n;
    cout<<"Enter no of diamonds:";
    cin>>diamonds;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=diamonds; j++)
        {
            for(int spaces=1; spaces<n; spaces++)
            {
                cout<<spaces;

            }
            for(int dec=n; dec>=i; --dec)
            {
                cout<<dec;
            }
            for(int inc=1; inc<=n; inc++)
            {
                cout<<inc;
            }
        }
        cout<<endl;

    }
}