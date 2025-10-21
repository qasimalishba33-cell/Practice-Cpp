#include<iostream>
using namespace std;
int main()
{
    int arr[5]={23,76,04,18,89};
    for(int i = 0; i<4; i++){ 
        int j = i + 1;
        for( int j = i + 1; j<5; j++){
            cout<<arr[j]<<endl;
        }
        cout<<arr[i];
        if(arr[i]>arr[j])
        {
            int temp = arr[i];
            arr[i] =arr[j];
            arr[j] = temp;
            cout<<temp;
        }
        cout<<"ascending order:";
    }
    for(int i = 0; i<5; i++ )
    {
        cout<<arr[i]<<"";
    }
}