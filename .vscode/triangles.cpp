#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 1st side of triangle:"<<endl;
    cin>>a;
    cout<<"Enter 2nd side of triangle:"<<endl;
    cin>>b;
    cout<<"Enter 3rd side of triangle:"<<endl;
    cin>>c;
    (a==b && b==c)?cout<<"Equilateral triangle!":
    ((a==b && b!=c || a==c && a!=b))?cout<<"Isoscelestriangle":
    cout<<"Scalene triangle";
    
    }
