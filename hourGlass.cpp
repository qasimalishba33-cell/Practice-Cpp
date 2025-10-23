#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number you want loop to coninue: ";
    cin>>n;
    int i = 0;
    while(i<n)
    {
     int j = 0;
     while(j<n){
         if(i==0 || i==n-1 ){
             cout<<"#";
         }
             else if(i==j ){
                 cout<<"#";
             }
             
             else if(i+j==n-1 && i!=(n-1)/2 && j!=(n-1)/2 && i!=0 && i!=n-1)
             {
                 cout<<"#";
             }
             else
             {
                 cout<<" ";
             }
             
         j++;
     }
     cout<<endl;
     i++;
    }
}