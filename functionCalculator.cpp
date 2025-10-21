#include<iostream>
using namespace std;
int sum(int a, int b,int c){
    int q ;
    q = a+b+c;
    return q;
}
int subtract(int d,int e,int f){
    int m;   
    m = d-e-f;
    return m;
}
int multiply(int a, int b, int c){
    int r;
    r = a*b*c;
    return r;
}
int divide(int a, int b,int c){
    int q;
    q = (a/b)/c;
    return q;
}
int main(){
   cout<< sum(1,2,3)<<endl;
   cout<<subtract(10,3,4)<<endl;
   cout<<multiply(12,3,4)<<endl;
   cout<<divide(9,3,3)<<endl;
   
}