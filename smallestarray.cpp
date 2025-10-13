#include <iostream>
using namespace std;

int main() {
    int arr[8] = {9, 2, 3, 4, 5, 89 ,0 ,88};
    int largest = arr[1];
    for (int i = 0; i < 8; i++) {
        if(largest < arr[i]){
            largest = arr[i];
        }
    }
    cout<<largest;
    return 0;
}