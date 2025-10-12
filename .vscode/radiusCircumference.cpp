#include<iostream>
using namespace std;
int main()
{
int radius ;
float area,circumference;
const float PI = 3.1416;
cout<<"Enter radius of circle:"<<endl;
cin>>radius;
area = PI*radius*radius;
cout<<"Area of circle is:"<<area<<endl;
circumference = 2*PI*radius;
cout<<"Circumference of circle is:"<<circumference<<endl;
}