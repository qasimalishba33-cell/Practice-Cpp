#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter the times you want loop to continue :";
    cin>>n;
    for(int i = n; i>=1; i--)
    {
        for(int space = 1; space>=i; space-- )
        {
            cout<<"";
            
        }
        for(int stars = 1; stars<=(2*i-1); stars++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    
    
    
    for(int i = 1; i<=n; i++)
{
    for(int space = i; space<=1; space++)
    {
        cout<<"";
    }
    for(int stars = 1; stars<=(2*i-1); stars++)
    {
        cout<<"*";
    }
cout<<endl;
}
}