#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    if(num%3==0 && num%5==0)
    {
        cout<<"num divisible by both 3 and 5 "<<endl;
    }
    else if(num%3==0 || num%5==0)
    {
        cout<<"num divisible only one of them"<<endl;
        
    }
    else
    {
        cout<<"num is indivisible by both"<<endl;
    }
    
}