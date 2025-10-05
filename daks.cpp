#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no:";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1;j<=n; j++)
        {
            for(int spaces=1; spaces<n; spaces++)
            {
                cout<<"";

            }
            cout<<"#";
        }
        cout<<endl;
    }
}