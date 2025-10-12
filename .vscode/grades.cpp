#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter the marks:"<<endl;
    cin>>marks;
    if(marks<40)
    {
        cout<<"fail"<<endl;
        
    }
    else if(marks>40 && marks<60)
    {
        cout<<"Average"<<endl;
    }
    else if(marks>60 && marks<80)
    {
        cout<<"Good"<<endl;
    }
    else 
    {
        cout<<"excellent"<<endl;
    }
    
}