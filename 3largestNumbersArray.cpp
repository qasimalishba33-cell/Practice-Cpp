#include <iostream>
using namespace std;

int main() {
    int arr[8] = {9, 2, 3, 4, 5, 89 ,0 ,88};
    int largest = arr[1];
    int largest2 = arr[1];
    int largest3 = arr[1];
    
    for (int i = 0; i < 8; i++) {
        if(largest < arr[i]){
            largest = arr[i];
        }
    }
          for (int i = 0; i < 8; i++) {
        if(largest2 < arr[i] && largest!=arr[i]  )
        {
            largest2 = arr[i];
        }
          }
            for (int i = 0; i < 8; i++) {
        if(largest3 < arr[i] && largest!=arr[i] && largest2!=arr[i])
        {
            largest3 = arr[i];
        
        }
            }
    
    cout<<largest<<endl;
    cout<<largest2<<endl;
    cout<<largest3;
    return 0;
}