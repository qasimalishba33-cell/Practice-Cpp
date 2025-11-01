#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    
    for (int i = n - 1; i >= 0; i--){
        
        for (int spaces = 1 ; spaces <= n-i ; spaces++){
            cout<<" ";
        }
        cout<<"1";
        
        if ( i != 0 ){
        
        for ( int j = 0; j < (2*i)-1; j++){
            cout<<" ";
            
        }
        cout<<i+1;
        }
        cout<<endl;
    }
}