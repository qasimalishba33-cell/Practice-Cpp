#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number you want loop to continue:"<<endl;
    cin>>n;
    int i =1;
    while(i<=n){
        int j = i;
        while(j<n){
            cout<<" ";
            j++;
        }
        int k = 1;
        while(k<=(2*i)-1){
            cout<<"*";
            k++;
        }
        cout<<endl;
        i++;
    }
    int a = n-1;
    while(a>=1){
        int b = n;
        while(b>a){
            cout<<" ";
            b--;
        }
        int c = 1;
        while(c<=(2*a)-1){
            cout<<"*";
            c++;
        }
        cout<<endl;
        a--;
    }
}