#include<iostream>
#include<string>
using namespace std;
int main(){
    string word;
    string reverse = "";

    cout<<"Enter any word: ";
    cin>>word;

    for(int i = word.length()-1 ; i >= 0 ; i--){
        reverse = reverse + word[i];
    }

    if(word == reverse){
        cout<<"Word is palidrome";
    }
    else
    {
        cout<<"Word is not palidrome";
    }
}