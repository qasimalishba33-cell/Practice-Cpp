#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    
    for (int i = 0; i <= n; i++){
        for (int spaces = n - i; spaces >= 1; spaces--){
            cout<<"-";
            
        }
        cout<<"*";
        
         if(i >= 1){
            for (int j = 1; j <= (2*i)-1; j++ ){
                cout<<"^";
            }
            cout<<"*";
         }
         
         for (int spaces = n-i; spaces >= 1; spaces--){
             cout<<"@";
         }
         
              cout<<endl;
    }
    
    for (int i = n -1; i >= 0; i--){
        
        for (int spaces = 1 ; spaces <= n-i ; spaces++ ){
            cout<<"-";
        }
        cout<<"*";
        
        
        if (i != 0){
        for (int j = 1; j <= (2*i)-1; j++){
            cout<<"&";
        }
        cout<<"*";
        }
        
        for (int spaces = 1; spaces <= n-i; spaces++){
            cout<<"!";
        }
      
          cout<<endl;
    }
        
        
        
        
        
        
   
}
